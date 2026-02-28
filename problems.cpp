// This is a simple C++ program that takes two integers as input from the user and outputs their sum.

#include<iostream>
using namespace std;

int main() 
{
    int a, b;                                     // Declare two integer variables to store user input
    cout << "Enter a: ";                          // Prompt the user to enter the first integer
    cin >> a;                                     // Read the first integer from the user
    cout << "Enter b: ";                          // Prompt the user to enter the second integer
    cin >> b;                                     // Read the second integer from the user
    cout << "Sum of a and b is: " << a + b << endl;  // Calculate the sum of a and b and output the result
    return 0;
}