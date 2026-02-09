#include <iostream>
using namespace std;

void compute_coins(int amount){
    
    // Precondition: 0 < amount < 100
    // Postcondition: The function prints out the number of quarters, dimes and pennies needed to make the amount value.

    
    if (0 < amount && amount < 100){
        
        int quarters = amount / 25;
        int remaining = amount % 25;
        
        int dimes = remaining / 10;
        remaining = remaining % 10;
        
        int pennies = remaining;
        
        //cent vs cents
        if (amount == 1){
            cout << amount << " cent can be given in ";
        }
        else{
        cout << amount << " cents can be given in ";
        }
        
       //Check number of coins to determine plurality then print
       //QUARTERS
        if (quarters) {
            if (quarters > 1){
                cout << quarters << " quarters";
            }
            else{
                cout << quarters << " quarter";
            }
        }
        
        //DIMES
        //Check if quarters to determine comma use
        if (dimes){
            if (dimes && quarters) {
                cout << ", ";
            }
            if (dimes > 1){
                cout << dimes << " dimes";
            }
            else{
                cout << dimes << " dime";
            }
        }
        
        //PENNIES
        //check if quarters or dimes to determine comma use
        if (pennies){
            if ((pennies && quarters) || (pennies && dimes)) {
                cout << ", ";
            }
            if (pennies > 1){
                cout << pennies << " pennies";
            }
            else{
                cout << pennies << " penny";
            }
        }
                
        cout << ".\n";
    }
    
    else{
        cout << "Amount is out of bounds. Must be between 1 and 99.\n";
    }
}   
    
int main () {
    
    int value;
    
    //Input value to use with compute_coins
    while (true) {
        cout << "Enter number of cents (or zero to quit):\n";
        cin >> value;
        
        if (value != 0){
            compute_coins(value);
        }
        else{
            break;
        }
    }
    return 0;
}
