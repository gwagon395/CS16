
#include <iostream> // for cout, cin
#include <fstream>  // for ifstream
#include <cstdlib>  // for exit
using namespace std;
#include "headers.h"    // contains the function declarations
#include "constants.h"  // contains 4 global variables


int main( )
{
    ifstream ifs;
    int size = MAXSIZE, array[MAXSIZE];
    getArray(ifs, FILENAME, array, size);
    print_array(array, size);

    int max = maxArray(array, size);
    cout << "Max = " << max << endl;

    int min = minArray(array, size);
    cout << "Min = " << min << endl;

    int sum = sumArray(array, size);
    cout << "Sum = " << sum << endl;

    evensArray(array, size);
    primesArray(array, size);

    AllSearches(array, size);
}

    return 0;
}

