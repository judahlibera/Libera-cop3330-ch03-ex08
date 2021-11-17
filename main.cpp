/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Judah Libera
 */

#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a number to test if it is odd or even" << endl;
    cin >> num;
    if (num % 2 == 0)
        cout << num << " is even.";
    else
        cout << num << " is odd.";
    return 0;
}
