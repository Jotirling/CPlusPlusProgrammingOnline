#include <iostream>
#include <string>

int main()
{

    {

    std::cout << (1 && 22) << std::endl;

    }

    {
        std::string str1 = "banana";
        std::string str2 = "apple";
        if (str1 > str2)
        {
             std::cout << "str1 > str2 is correct" << std::endl;
        }
        else
        {
             std::cout << "str1 > str2 is incorrect" << std::endl;
        }
    }


    {
        char charValue = 'A';
        switch(charValue)
        {
            case 65:
                std::cout << "charValue" << std::endl;
            break;
        }
    }


    int a = 10;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    int variable=1;
    int& valueRef = variable;
    std::cout << "variable: " << variable << " address of variable: " << &variable << std::endl; 
    valueRef = 100;
    int valueRefRef = valueRef;
    std::cout << "variable: " << variable << " address of variable: " << &variable << std::endl; 
    std::cout << "valueRef: " << valueRef << " address of valueRef: " << &valueRef << std::endl; 
    std::cout << "valueRefRef: " << valueRefRef << " address of valueRefRef: " << &valueRefRef << std::endl; 

    char var = 'A';
    std::cout << &var << std::endl; // it will not print the address of var
/**
 * In C++, when you use std::cout to print a char*, it expects that the pointer points to the start of a null-terminated string. 
 * It starts printing characters from the memory location that the pointer points to until it encounters a null terminator ('\0').
 * But when you want to print the memory address of a single char variable, it's not a null-terminated string. 
 * Therefore, you need to tell std::cout explicitly that you're printing a memory address, not a string.
 * So, you cast the pointer to void*, which is a general-purpose pointer type that doesn't have any assumptions about the data it points to. 
 * Here's how you do it:
        #include <iostream>
        int main() {
            char var = 'a'; // Example char variable
            std::cout << static_cast<void*>(&var) << std::endl;
            return 0;
        }
 * By using static_cast<void*>(&var), you're telling std::cout to treat the address of var as a memory address, 
 * allowing it to print the correct value without trying to interpret it as a null-terminated string.
*/
    // std::cout << "\\\" << std::endl; // compilation error
/**
 * In C++, the line std::cout << "\\\" << std::endl; is valid and represents the printing of a backslash (\) followed by a double quote ("), followed by an end of line character. 
 * Let's break down what each part does:
 * std::cout: This is the standard output stream in C++, which is typically associated with the console or terminal. 
 * It is used for outputting data.
 * <<: This is the stream insertion operator in C++, used to insert data into the output stream (std::cout in this case).
 * "\\\"": This is a string literal.
 * The \\ represents a single backslash character (\), 
 * and \" represents a double quote character ("). 
 * The additional backslash before the double quote is an escape sequence required in C++ to represent a literal double quote within a string literal.
 * So, when you execute std::cout << "\\\"" << std::endl;, it will output a backslash followed by a double quote, and then move to the next line. 
 * The double quote is escaped with a backslash to distinguish it as part of the string literal.
*/
    unsigned int value = 12;
    std::cout << "value: " << value << std::endl;

    // std::string str;
    // std::cout << "enter str:" ;
    // std::getline(std::cin, str);
    // std::cout << str << std::endl;

    // int num1, num3;
    // char num2;
    // std::cin >> num1 >> num2 >> num3;
    // std::cout << num1 << " " << num2 << " " << num3 << std::endl;
    
    return 0;
}
