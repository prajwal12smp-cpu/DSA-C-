// conditional statements
// conditional statements are used to perform different actions based on different conditions.
// C++ supports the following conditional statements:
// 1. if statement
// 2. if...else statement
// 3. if...else if...else statement
// 4. switch statement
// 5. ternary operator


// if-else statement
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