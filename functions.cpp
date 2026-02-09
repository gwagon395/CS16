#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

#include "headers.h"
#include "constants.h"

// The following function is defined for you. ***Do not change it AT ALL.***
//
// Pre-Condition: takes in an ifstream object for input file, 
//              a string for an input filename, an integer array and its size
// Post-Condition: the array will be populated with all the numbers from the input file
void getArray(ifstream& in, string fname, int arr[], int size)
{
    in.open(fname);
    if ( in.fail() ) 
    { 
        cerr << "Input file opening failed.\n"; 
        exit(1); 
    }
    for (int i = 0; i < size; i++)
    {
        in >> arr[i];
    }
}

// Add your 8 functions definitions below:

// Pre-Condition: takes array and array size
// Post-Condition: outputs array values
void print_array(int arr[], int asize)
{
    for (int index = 0; index < asize; index++)
    {
        cout << arr[index];
        if (index != asize - 1)
            cout << ", ";
    }
    cout << endl;
}

// Pre-Condition: takes array and array size
// Post-Condition: outputs maximun int in array
int maxArray(int arr[], int asize)
{
    
    int max = arr[0];
    int arr_index = 0;
    
    for (int index = 0; index < asize; index++)
    {
        if (arr[index] > max)
        {
            max = arr[index];
            arr_index = index;
        }
    }
    return arr[arr_index];
}

// Pre-Condition: takes in array and array size
// Post-Condition: outputs minmun int in array
int minArray(int arr[], int asize)
{
    int min = arr[0];
    int index;
    
    for (index = 0; index < asize; index++)
    {
        if (arr[index] < min)
            min = arr[index];
        
    }
    return min;
}

// Pre-Condition: takes in array and array size
// Post-Condition: Outputs sum of array values
int sumArray(int arr[], int asize)
{
    int sum = 0;

    for (int i = 0; i < asize; i++)
    {
        sum += arr[i];
    }
    return sum;
}

// Pre-Condition: takes array and array size
// Post-Condition: outputs even values
void evensArray(int arr[], int asize)
{
    cout << "Evens: ";
    
    for (int i = 0; i < asize; i++)
    {
        if (arr[i] % 2 == 0)
            cout << arr[i] << ", ";
    }
    cout << "end" << endl;
}

// Pre-Condition: takes in array and array size
// Post-Condition: outputs prime numbers
void primesArray(int arr[], int asize)
{
    cout << "Primes: ";
    
    //for each number in the array
    for (int index = 0; index < asize; index++)
    {
        bool check = true;
        
        //remove negative and 1 and 0
        if (arr[index] < 0 || arr[index] == 1 || arr[index] == 0)
            check = false;
        
        //for each number in between 1 and the number in the array
        for (int num = arr[index] - 1; num > 1; num--)
        {
            
            //check if divisible (if not then check = false)
            if (arr[index] % num == 0 || check == false)
            {
                check = false;
                break;
             }
         }
         
         if (check == true)
            cout << arr[index] << ", ";
    }
    cout << "end" << endl;
}


// Pre-Condition: takes in array, array size, and target number
// Post-Condition: if target value found, returns index otherwise returns -1
int SeqSearch(int arr[], int array_size, int target)
{
    //if target is found in array, return index
    for (int index = 0; index < array_size; index ++)
    {
        if (arr[index] == target)
        {
            return index;
        }
    }
    return -1;
}

// Pre-Condition: takes in array, array size
// Post-Condition: returns index of an array value if it matches a value in NSEARCHES
void AllSearches(int array[], int array_size)
{   
    int global_num;
    int index;
   
    cout << "Searches:" << endl;

    //iterate over each number in SEARCHES[]
    for (index = 0; index < NSEARCHES; index ++)
    {
        global_num = SEARCHES[index];
    
    
        //call SeqSearch to check if SEARCHES[] == the array number
        int output = SeqSearch(array, array_size, global_num);
        
        cout << "Looking for " << global_num << ". ";

        if (output != -1)
        {
            cout << "Found at index: " << output << endl;
        }
        else
        {
            cout << "Not Found!" << endl;
        }
    }

}






