
//============================================================================
// Name        : CPlusPlusProgram.cpp
// Author      : Jotirling Swami
// Version     :
// Copyright   : Your copyright notice
// Description : singleton-design-pattern.cpp
//============================================================================

/*

    // The characteristics of std::lock_guard are:

    // 1. It holds the lock from the time of construction until the time of destruction.
    // 2. When it is created, it tries to take control of the mutex which contains resources it is provided.
    // 3. When this control is over, the std::lock_guard will destroy and mutex frees.
    // 4.It is defined under the header file mutex.h.

    // The characteristics of std::unique_lock are:

    // 1.It does not lock as soon as it is created and unlocks at any time within the time it exists.
    // 2.It is similar to std::lock_guard but provides many methods for locking, unlocking and removing locks.
    // 3.This transfers lock ownership from one instance of the resource to another.
    // 4.It is defined under the header file mutex.h.

    // Difference between std::lock_guard and std::unique_lock
    // 1. The programmer does not have the ability to unlock the std::lock_guard but he can unlock the std::unique_lock.

    // 2. The object creation in std::lock_guard and std::unique_lock is as follows:

    //     std::lock_guard lock1(resource); // resource is the resouce to lock and lock1 is the object
    //     std::unique_lock lock2(resource); // resource is the resource to lock and lock2 is the object

    // 3. The constructor of the object lock1 locks the resource and when the object scope is over, the object destructor unlocks the mutex.

    // 4. The constructor of the object lock2 locks the resource and the object destructor unlocks the mutex.
    // The programmer has the ability to unlock the resources with the lock object in the case of std::unique_lock.

*/

#include <iostream> // std::cout
#include <mutex>    // std::mutex
#include <thread>   // thread

std::mutex mtx;

class SingleInstance
{

public:
    // Getting singleton objects
    static SingleInstance *GetInstance()
    {
        if (m_SingleInstance == NULL)
        {

            // std::lock_guard<std::mutex> g(mtx);                          // lock
            std::unique_lock<std::mutex> uniq_mtx(mtx, std::defer_lock); // lock
            uniq_mtx.lock();
            if (m_SingleInstance == NULL)
            {
                m_SingleInstance = new (std::nothrow) SingleInstance; // Threads are insecure without locking, and multiple instances are created when threads are concurrent
            }
            uniq_mtx.unlock(); // unlock
        }
        return m_SingleInstance;
    }
    // Release the singleton and call it when the process exits
    static void deleteInstance()
    {
        if (m_SingleInstance)
        {
            delete m_SingleInstance;
            m_SingleInstance = NULL;
        }
    }
    // Print singleton address
    void Print()
    {
        std::cout << "My instance memory address is:" << this << std::endl;
    }

private:
    // Construct and analyze it as private, prohibit external structure and Deconstruction
    SingleInstance()
    {
        std::cout << "Constructor" << std::endl;
    }

    ~SingleInstance()
    {
        std::cout << "Destructor function" << std::endl;
    }

    // The forbid external copy and assignment into private functions
    // Copy construction
    SingleInstance(const SingleInstance &signal);
    // Assignment OperatorF
    const SingleInstance &operator=(const SingleInstance &signal);

private:
    // Unique singleton object pointer
    static SingleInstance *m_SingleInstance;
};

// Initialize static member variables
SingleInstance *SingleInstance::m_SingleInstance = NULL;

// Thread function
void PrintHello()
{
    std::cout << "Hi, I am a thread ID:[" << std::this_thread::get_id() << "]" << std::endl;

    // Print instance address
    SingleInstance::GetInstance()->Print();
}

#define NUM_THREADS 5 // Number of Threads

int main(void)
{

    std::cout << "main() : Start! " << std::endl;

    std::thread thread1(PrintHello);
    std::thread thread2(PrintHello);

    thread1.join();
    thread2.join();

    // Manual release of single instance resources
    SingleInstance::deleteInstance();
    std::cout << "main() : End! " << std::endl;
    return 0;
}
