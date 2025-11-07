#include <iostream>
using namespace std;

#define INTEGER 
#include "function.h"  

int main() {
    const int size = 5;

#ifdef INTEGER
    int arr[size];
#elif defined(DOUBLE)
    double arr[size];
#elif defined(CHAR)
    char arr[size];
#endif

    FillArray(arr, size);
    cout << "Arrey: ";
    ShowArray(arr, size);

    cout << "min: " << FindMin(arr, size) << endl;
    cout << "max: " << FindMax(arr, size) << endl;

    SortArray(arr, size);
    cout << "Sorted array: ";
    ShowArray(arr, size);

    EditArray(arr, size, 2, 99); 
    cout << "After editing: ";
    ShowArray(arr, size);

    return 0;
}
