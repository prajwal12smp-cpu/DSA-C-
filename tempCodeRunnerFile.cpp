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
    