// This program demonstrates the use of various operators in C++ including arithmetic, relational, and logical operators.

#include<iostream>
using namespace std;

int main()
{
    // Arithmetic Operators
    int a=10, b=20;
    cout<<"a+b="<<a+b<<endl; // This will print 30 because 10 + 20 = 30
    cout<<"a-b="<<a-b<<endl; // This will print -10 because 10 - 20 = -10
    cout<<"a*b="<<a*b<<endl; // This will print 200 because 10 * 20 = 200
    cout<<"a/b="<<a/b<<endl; // This will print 0 because 10 / 20 = 0 (integer division)
    cout<<"a%b="<<a%b<<endl; // This will print 10 because 10 % 20 = 10 (the remainder of 10 divided by 20 is 10)

    // Relational Operators
    cout<< (3<5)<<endl; // This will print 1 (true) because 3 is less than 5
    cout<< (3>5)<<endl; // This will print 0 (false) because 3 is not greater than 5
    cout<< (3<=5)<<endl; // This will print 1 (true) because 3 is less than or equal to 5
    cout<< (3>=5)<<endl; // This will print 0 (false) because 3 is not greater than or equal to 5
    cout<< (3==5)<<endl; // This will print 0 (false) because 3 is not equal to 5
    cout<< (3!=5)<<endl; // This will print 1 (true) because 3 is not equal to 5
    cout<< (3!=3)<<endl; // This will print 0 (false) because 3 is equal to 3

    // Logical Operators
    cout<< !(3>1)<<endl; // This will print 0 (false) because !(3>1) is false
    cout<< !(3<1)<<endl; // This will print 1 (true) because !(3<1) is true
    cout<< ( (3<1) || (3>1) )<<endl; // This will print 1 (true) because (3<1) is false and (3>1) is true, so the OR operation returns true
    cout<< ( (3<1) && (3>1) )<<endl; // This will print 0 (false) because (3<1) is false and (3>1) is true, so the AND operation returns false

    return 0;
}