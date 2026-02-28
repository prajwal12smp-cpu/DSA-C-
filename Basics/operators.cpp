// This program demonstrates the use of various operators in C++ including arithmetic, relational and logical operators. It performs basic operations on integers and evaluates relational and logical expressions, printing the results to the console.

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

    //unary operator
    int a = 10; 
    int b = a++; // This will assign the value of 'a' (which is 10) to 'b' and then increment 'a' by 1, resulting in 'a' being 11 after this operation
    // int b = ++a; // This will first increment 'a' by 1 (making it 11) and then assign the new value of 'a' to 'b', resulting in 'b' being 11
    // int b = a--; // This will assign the value of 'a' (which is 10) to 'b' and then decrement 'a' by 1, resulting in 'a' being 9 after this operation
    // int b = --a; // This will first decrement 'a' by 1 (making it 9) and then assign the new value of 'a' to 'b', resulting in 'b' being 9
    cout << "b = " << b << endl; // This will print 10 because the post-increment operator returns the value of 'a' before incrementing it
    cout << "a = " << a << endl; // This will print 11 because after the post-increment operation, 'a' is incremented by 1, resulting in 11
    return 0;
}