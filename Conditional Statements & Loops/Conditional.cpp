// conditional statements
// conditional statements are used to perform different actions based on different conditions.
// C++ supports the following conditional statements:
// 1. if statement
// 2. if...else statement
// 3. if...else if...else statement
// 4. switch statement
// 5. ternary operator


// if-else statement
// The if-else statement is used to execute a block of code if a specified condition is true, and another block of code if the condition is false. The syntax is: if (condition) { // code to be executed if condition is true } else { // code to be executed if condition is false }
#include <iostream>
using namespace std;
int main() {
    int n = -45;

    if (n>=0) {
        cout << "n is a positive number\n";
    } else {
        cout << "n is a negative number\n";
    }
    return 0;
}

// if-else statement with user input
// We can also use the if-else statement to check user input. For example, we can ask the user to enter their age and check if they are an adult or a minor.
#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) {
        cout << "You are an adult and you can vote.\n";
    } else {
        cout << "You are a minor and you cannot vote.\n";
    }
    return 0;
}

// if-else statement to check if a number is even or odd
// A number is even if it is divisible by 2, and odd if it is not divisible by 2. We can use the modulus operator (%) to check if a number is even or odd. If n%2 == 0, then n is even; otherwise, n is odd.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n%2 == 0) {
        cout << "The number is even.\n";
    } else {
        cout << "The number is odd.\n";
    }
    return 0;
}

// if-else if-else statement to determine the grade of a student based on marks
// A student is graded based on the following criteria:
// Marks >= 90: Grade A
// Marks >= 80 and < 90: Grade B
// Marks >= 70 and < 80: Grade C
// Marks >= 60 and < 70: Grade D
// Marks < 60: Grade F
#include <iostream>
using namespace std;
int main() {
   int marks;
   cout << "Enter your marks: ";
   cin >> marks;
   if (marks >= 90) {
       cout << "Grade: A\n";
   } else if (marks >= 80 && marks < 90) {
       cout << "Grade: B\n";
   } else if (marks >= 70 && marks < 80) {
       cout << "Grade: C\n";
   } else if (marks >= 60 && marks < 70) {
       cout << "Grade: D\n";
   } else {
       cout << "Grade: F\n";
   }
   return 0; 
}

//Ternary operator
// The ternary operator is a shorthand for the if-else statement. It takes three operands: a condition, a value to return if the condition is true, and a value to return if the condition is false. The syntax is: condition ? value_if_true : value_if_false;
#include <iostream>
using namespace std;
int main() {
    int n = 45;
    cout << (n>=0 ? "n is a positive number\n" : "n is a negative number\n");
    return 0;
}


// switch statement
// The switch statement is used to perform different actions based on different conditions. It is a more efficient way to compare a variable with multiple values. The syntax is: switch(expression) { case value1: // code to be executed if expression == value1 break; case value2: // code to be executed if expression == value2 break; ... default: // code to be executed if expression doesn't match any case }
#include <iostream>
using namespace std;
int main() {
    int day;
    cout << "Enter a number (1-7) to represent a day of the week: ";
    cin >> day;
    switch(day) {
        case 1:
            cout << "Monday\n";
            break;
        case 2:
            cout << "Tuesday\n";
            break;
        case 3:
            cout << "Wednesday\n";
            break;
        case 4:
            cout << "Thursday\n";
            break;
        case 5:
            cout << "Friday\n";
            break;
        case 6:
            cout << "Saturday\n";
            break;
        case 7:
            cout << "Sunday\n";
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 7.\n";
    }
    return 0;
}