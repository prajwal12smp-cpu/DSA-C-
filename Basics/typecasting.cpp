// This program demonstrates typecasting in C++.
#include<iostream>
using namespace std;

int main() {
     char grade = 'A'; //A has an ASCII value of 65
     int value = grade; // implicit typecasting from char to int
     cout << value << endl; // will print 65 
     
     double price = 100.99;
     int newPrice = (int)price; // explicit typecasting from double to int
     cout << newPrice << endl; // will print 100
    return 0;
}