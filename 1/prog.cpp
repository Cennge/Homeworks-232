#define INTEGER

#include "function.h"
#include <iostream>

using namespace std;

int main() {
    const int SIZE = 10;
    int intArray[SIZE];

    fillArray(intArray, SIZE);
    cout << "Original array: ";
    showArray(intArray, SIZE);

    cout << "Min value: " << findMin(intArray, SIZE) << endl;
    cout << "Max value: " << findMax(intArray, SIZE) << endl;

    sortArray(intArray, SIZE);
    cout << "Sorted array: ";
    showArray(intArray, SIZE);

    editArray(intArray, SIZE, 3, 99); // Change value at index 3 to 99
    cout << "Array after editing: ";
    showArray(intArray, SIZE);

    return 0;
}

