// Relationships between C++ Classes:

//     1. inheritance :

//         Relationship:

//             D "is-a" B

//         Code:

//             class D : public B{ };

//         Explanation:
//             Derived class D is a specialization of the Base class B.
//             D inherits all the members of B

//     2. Composition

//         Relationship:  D "has-a" B

//             Ownership, D is "part—of" B

//         Code:

//         class B{};

//         class D
//         {
//                 private:
//                     B b;
//         };

//         Explanation:
//             Composite class D owns, or contains, a part class B.
//                  B is created and destroyed with D.
//             The interface of B is visible only to D, not its clients.

//     3. Aggregation

//         Relationship:  D "has-a" B

//             Ownership, B is "part-of" D

//         Code:

//             class B{};

//             class D
//             {
//                 void fun()
//                 {
//                     B* ptr =  new B();
//                 }
//             }

//         Explanation:
//             The Aggregator class D owns a part class B.
//             B is created by a member function of D,
//                  and so its lifetime is strictly less than that of D.
//             D is expected to destroy B.

//     4. Using:

//         Relationship:

//         Referral: U uses R through a reference

//         Code:

//             public class U
//             {
//                 ...
//                 public:
//                 void register (R& r)
//                 {
//                 // use r
//                 }
//             };

//         Explanation:
//             A class U uses instance of class R, to which it holds a reference. R is created by some other entity
//             and a reference to it is passed to some member function of class U.