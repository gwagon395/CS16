// Calculator.cpp
// By: Max Sroka
// Created on: 1/15/2026

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Usage: ./calculate int char int
// char can be one of 4 things: + - x or %

int main( int argc, char *argv[] )
{
// PART 1: Check to see if the number of arguments is correct
// Hint: use “if (argc ...)” to check this,
// use cerr to output any messages

    if (argc != 4){
        cerr << "Number of arguments is incorrect.\n";
        exit(1);
    }

// PART 2: Convert arguments into integers (only those that need it!)
// Hint: this means using atoi()
// Convert operation to string

    string symbol = argv[2];
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[3]);

// PART 3: Check for illegal operations like divide by zero...
// use cerr to output any messages
    
    if (num2 == 0){
        cerr << "Cannot divide by zero.\n";
        exit(1);
    }

// PART 4: Do the appropriate calculations,
// outputs using both cout and cerr, etc...
// Check for proper operation use

    if (symbol == "+"){
        cout << num1 + num2 << endl;
    }
    else if (symbol == "-"){
        cout << num1 - num2 << endl;
    }
    else if (symbol == "x"){
        cout << num1 * num2 << endl;
    }
    else if (symbol == "%"){
        cout << num1 % num2 << endl;
    }
    else{
        cerr << "Bad operation choice.\n";
        exit(1);
    }

return 0;
}
