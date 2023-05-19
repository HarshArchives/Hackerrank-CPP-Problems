/* 
@ author geekyharsh05

Approach 1

In this solution, we define an array called numbers that holds the corresponding words for the numbers 1 to 9. The index of the array represents the number minus one. For example, numbers[0] corresponds to "one", numbers[1] corresponds to "two", and so on.

After reading the input integer n, we check if it is between 1 and 9 (inclusive). If it is, we directly access the corresponding word from the numbers array using n - 1 as the index and print it. If n is not between 1 and 9, we print "Greater than 9".

This approach avoids using a switch statement and instead utilizes an array to store and access the words directly.

*/


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string numbers[] = {
        "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };

    if (n >= 1 && n <= 9) {
        cout << numbers[n - 1];
    } else {
        cout << "Greater than 9";
    }

    return 0;
}

/*
Approach 2

Alternate way- Using switch case statements

In this solution, we first read an integer n from the user. Then we use an if statement to check if n is between 1 and 9 (inclusive). If it is, we use a switch statement to print the corresponding word ("one" for 1, "two" for 2, etc.). If n is not between 1 and 9, we print "Greater than 9".

This solution assumes that the input is a valid integer. You can add additional input validation if needed.
*/


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 1 && n <= 9) {
        switch (n) {
            case 1:
                cout << "one";
                break;
            case 2:
                cout << "two";
                break;
            case 3:
                cout << "three";
                break;
            case 4:
                cout << "four";
                break;
            case 5:
                cout << "five";
                break;
            case 6:
                cout << "six";
                break;
            case 7:
                cout << "seven";
                break;
            case 8:
                cout << "eight";
                break;
            case 9:
                cout << "nine";
                break;
        }
    }
    else {
        cout << "Greater than 9";
    }

    return 0;
}
