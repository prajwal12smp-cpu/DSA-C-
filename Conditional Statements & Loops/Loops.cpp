//Loops are used to execute a block of code repeatedly until a certain condition is met.
//There are three types of loops in C++: for loop, while loop, and do-while loop.

//while loop
//The while loop is used to execute a block of code repeatedly as long as a specified condition is true.
//print numbers from 1 to 10 using while loop
#include <iostream>
using namespace std;
int main() {
    int i = 1; //initialization
    while (i <= 5) { //condition
        cout << i << " "; //body of the loop
        i++; //increment
    }
    cout << endl;
    return 0;
} //output: 1 2 3 4 5