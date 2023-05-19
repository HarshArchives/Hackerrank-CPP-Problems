/*
@ author geekyharsh05

Approach 1

    Include necessary headers: The code includes the <iostream> and <cstdio> headers. These headers provide input/output functionality for reading input and printing output.

    Variable declarations: The code declares several variables of different data types: int a, long b, char c, float d, and double e. These variables will store the input values.

    Input: The cin object is used to read input values from the user. The >> operator is used to extract values from the input stream and store them in the corresponding variables a, b, c, d, and e.

    Output: The printf function is used to print the values stored in the variables. The format specifier %d is used to print the integer values a and b, %ld for long value b, %c for char value c, %0.3f for float value d with three decimal places, and %0.9lf for double value e with nine decimal places.

    Return statement: The return 0; statement indicates the successful execution of the program.


*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;

    cin >> a >> b >> c >> d >> e;
    printf("%d\n%ld\n%c\n%0.3f\n%0.9lf", *&a, *&b, *&c, *&d, *&e);

    return 0;
}

/*
Approach 2

In this code, I've replaced the printf statement with the cout statements, which are simpler and more idiomatic in C++. The fixed and setprecision manipulators from the <iomanip> header are used to set the precision for floating-point output.

By removing the unnecessary use of pointers and using the cout statements directly, we improve both the code clarity and efficiency.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a;
    long b;
    char c;
    float d;
    double e;

    cin >> a >> b >> c >> d >> e;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << fixed << setprecision(3) << d << endl;
    cout << fixed << setprecision(9) << e << endl;

    return 0;
}
