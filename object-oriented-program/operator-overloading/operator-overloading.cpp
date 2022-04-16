
// Operator overloading
//     It is an important concept in C++.
//     It is static / compile time polymorphism in which an operator is overloaded to \
//     give user defined meaning to it.
//     Overloaded operator is used to perform operation on user-defined data type.
//     For example '+' operator can be overloaded to perform addition on various data types
//         Like for Integer, String(concatenation) etc.

// Rule and restrictions on Operator Overloading in C++
//     Following are some restrictions to be kept in mind while implementing operator overloading.
//     1. Precedence and Associativity of an operator cannot be changed.
//     2. Arity (numbers of Operands) cannot be changed.
//         Unary operator remains unary, binary remains binary etc.
//     3. No new operators can be created, only existing operators can be overloaded.
//     4. Cannot redefine the meaning of a procedure. You cannot change how integers are added.

// Implementing Operator Overloading in C++
//     Operator overloading can be done by implementing a function which can be :
//         1. Member Function
//         2. Non-Member Function
//         3. Friend Function

//         Operator overloading function can be a member function if the Left operand is an Object
//            of that class, but if the Left operand is different,
//            then Operator overloading function must be a non-member function.
//         Operator overloading function can be made friend function if it needs access
//            to the private and protected members of class.

// Almost any operator can be overloaded in C++.
//     However there are few operator which can not be overloaded.
//     Operator that are not overloaded are follows:
//             1. scope operator - ::
//             2. sizeof
//             3. member selector - .
//             4. member pointer selector - *
//             5. ternary operator - ?: