// This program demonstrates how to take input from the user in C++ using the cin object. It prompts the user to enter their age and then displays the entered age back to the user.

#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter a age: ";
    cin>>age;
    cout<<"You entered: "<<age<<endl;
    return 0;
}