/*
@ author geekyharsh05

This code is a simple C++ program that prints the message "Hello, World!" to the console. Let's break down the code and explain its approach step by step:

   1. #include <iostream>: This line includes the iostream library, which provides input and output operations in C++. It allows us to use the cout object to print output to the console.

   2. using namespace std;: This line is a using directive that allows us to use the names from the std namespace directly without prefixing them with std::. In this code, it enables us to use cout without specifying std::cout.

   3. int main() { ... }: This is the main function, the entry point of the program. It has a return type of int, indicating that it should return an integer value. The function body is enclosed within curly braces {}.

   4. cout << "Hello, World!";: This line uses the cout object from the std namespace to print the string "Hello, World!" to the console. The << operator is used to send the string to the cout object.

   5. return 0;: This line signifies the end of the main function. The return 0; statement returns the value 0 to the operating system, indicating that the program executed successfully.

Overall, the approach of this code is quite simple: it includes the necessary library, defines the main function, and uses the cout object to print the "Hello, World!" message. Finally, it returns 0 to indicate successful execution and program termination.
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!";
    return 0;
}