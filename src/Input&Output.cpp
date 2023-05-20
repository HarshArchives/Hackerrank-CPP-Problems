/*
@ author geekyharsh05

This code is a C++ program that reads three integer inputs from the user and then calculates their sum. Let's break down the code and explain its approach step by step:

   1. #include <iostream>: This line includes the iostream library, which provides input and output operations in C++. It allows us to use the cin and cout objects for input and output, respectively.

   2. using namespace std;: This line is a using directive that allows us to use the names from the std namespace directly without prefixing them with std::. In this code, it enables us to use cin and cout without specifying std::cin and std::cout.

   3. int main() { ... }: This is the main function, the entry point of the program. It has a return type of int, indicating that it should return an integer value. The function body is enclosed within curly braces {}.

   4. int a, b, c;: These lines declare three integer variables a, b, and c to store the user input.

   5. cin >> a >> b >> c;: This line uses the cin object to read three integer inputs from the user and store them in the variables a, b, and c. The >> operator is used to extract the input and assign it to the variables.

   6. cout << a + b + c;: This line calculates the sum of the variables a, b, and c and uses the cout object to print the result to the console.

   7. return 0;: This line signifies the end of the main function. The return 0; statement returns the value 0 to the operating system, indicating that the program executed successfully.

The approach of this code is to prompt the user to enter three integer inputs, read those inputs using cin, calculate their sum, and then print the result using cout. Finally, it returns 0 to indicate successful execution and program termination.
*/

#include <iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      int a, b, c;
      cin >> a >> b >> c;
      cout << a + b + c;
    return 0;
}
