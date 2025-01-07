#include <iostream>
#include <cmath>    // For math functions like pow, sqrt, sin, cos, tan, log
#include <limits>   // To handle numeric limits
#include <string>

using namespace std;

void printMenu() {
    cout << "\nChoose an operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Exponentiation (^)" << endl;
    cout << "6. Square Root (sqrt)" << endl;
    cout << "7. Modulo (%)" << endl;
    cout << "8. Logarithm (log)" << endl;
    cout << "9. Sine (sin)" << endl;
    cout << "10. Cosine (cos)" << endl;
    cout << "11. Tangent (tan)" << endl;
    cout << "12. Exit" << endl;
}

int main() {
    double num1, num2, result;
    char operation;
    bool exitFlag = false;

    cout << "Welcome to the Complex Calculator!" << endl;

    while (!exitFlag) {
        printMenu();
        cout << "Enter operation: ";
        cin >> operation;

        if (operation == '1' || operation == '+' || operation == '2' || operation == '-' || operation == '3' || operation == '*' ||
            operation == '4' || operation == '/' || operation == '5' || operation == '^' || operation == '6' || operation == 'r' || 
            operation == '7' || operation == '%' || operation == '8' || operation == 'l' || operation == '9' || operation == 's' || 
            operation == '10' || operation == 'c' || operation == '11' || operation == 't' || operation == '12') {
            switch (operation) {
                case '1': case '+':
                    cout << "Enter first number: ";
                    cin >> num1;
                    cout << "Enter second number: ";
                    cin >> num2;
                    result = num1 + num2;
                    cout << "Result: " << result << endl;
                    break;
                
                case '2': case '-':
                    cout << "Enter first number: ";
                    cin >> num1;
                    cout << "Enter second number: ";
                    cin >> num2;
                    result = num1 - num2;
                    cout << "Result: " << result << endl;
                    break;
                
                case '3': case '*':
                    cout << "Enter first number: ";
                    cin >> num1;
                    cout << "Enter second number: ";
                    cin >> num2;
                    result = num1 * num2;
                    cout << "Result: " << result << endl;
                    break;
                
                case '4': case '/':
                    cout << "Enter first number: ";
                    cin >> num1;
                    cout << "Enter second number: ";
                    cin >> num2;
                    if (num2 != 0) {
                        result = num1 / num2;
                        cout << "Result: " << result << endl;
                    } else {
                        cout << "Cannot divide by zero!" << endl;
                    }
                    break;
                
                case '5': case '^':
                    cout << "Enter base number: ";
                    cin >> num1;
                    cout << "Enter exponent: ";
                    cin >> num2;
                    result = pow(num1, num2);
                    cout << "Result: " << result << endl;
                    break;

                case '6': case 'r':
                    cout << "Enter number to find square root: ";
                    cin >> num1;
                    if (num1 >= 0) {
                        result = sqrt(num1);
                        cout << "Result: " << result << endl;
                    } else {
                        cout << "Cannot take the square root of a negative number!" << endl;
                    }
                    break;
                
                case '7': case '%':
                    cout << "Enter first number: ";
                    cin >> num1;
                    cout << "Enter second number: ";
                    cin >> num2;
                    if (num2 != 0) {
                        result = fmod(num1, num2);  // Using fmod() for modulo operation
                        cout << "Result: " << result << endl;
                    } else {
                        cout << "Cannot divide by zero!" << endl;
                    }
                    break;
                
                case '8': case 'l':
                    cout << "Enter number: ";
                    cin >> num1;
                    if (num1 > 0) {
                        result = log(num1);  // Natural logarithm (base e)
                        cout << "Result: " << result << endl;
                    } else {
                        cout << "Cannot take logarithm of a non-positive number!" << endl;
                    }
                    break;

                case '9': case 's':
                    cout << "Enter angle in degrees: ";
                    cin >> num1;
                    result = sin(num1 * M_PI / 180);  // Convert to radians
                    cout << "Result: " << result << endl;
                    break;

                case '10': case 'c':
                    cout << "Enter angle in degrees: ";
                    cin >> num1;
                    result = cos(num1 * M_PI / 180);  // Convert to radians
                    cout << "Result: " << result << endl;
                    break;

                case '11': case 't':
                    cout << "Enter angle in degrees: ";
                    cin >> num1;
                    result = tan(num1 * M_PI / 180);  // Convert to radians
                    cout << "Result: " << result << endl;
                    break;

                case '12':
                    exitFlag = true;
                    cout << "Exiting the calculator. Goodbye!" << endl;
                    break;
                
                default:
                    cout << "Invalid operation!" << endl;
                    break;
            }
        } else {
            cout << "Invalid operation, please try again!" << endl;
        }
    }

    return 0;
}
