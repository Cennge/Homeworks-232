#include "function.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

void FillArrayInt(int array[], int size) {
    srand(time(nullptr));
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 100; 
    }
}

void ShowArrayInt(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int FindMinInt(int array[], int size) {
    int minVal = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < minVal) {
            minVal = array[i];
        }
    }
    return minVal;
}

int FindMaxInt(int array[], int size) {
    int maxVal = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > maxVal) {
            maxVal = array[i];
        }
    }
    return maxVal;
}

void SortArrayInt(int array[], int size) {
    sort(array, array + size);
}

void EditArrayInt(int array[], int size, int index, int newValue) {
    if (index >= 0 && index < size) {
        array[index] = newValue;
    }
}

void FillArrayChar(char array[], int size) {
    srand(time(nullptr));
    const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    const int charsetSize = sizeof(charset) - 1;
    for (int i = 0; i < size; ++i) {
        array[i] = charset[rand() % charsetSize];
    }
}

void ShowArrayChar(char array[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

char FindMinChar(char array[], int size) {
    char minVal = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < minVal) {
            minVal = array[i];
        }
    }
    return minVal;
}

char FindMaxChar(char array[], int size) {
    char maxVal = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > maxVal) {
            maxVal = array[i];
        }
    }
    return maxVal;
}

void SortArrayChar(char array[], int size) {
    sort(array, array + size);
}

void EditArrayChar(char array[], int size, int index, char newValue) {
    if (index >= 0 && index < size) {
        array[index] = newValue;
    }
}

void FillArrayDouble(double array[], int size) {
    srand(time(nullptr));
    for (int i = 0; i < size; ++i) {
        array[i] = (double)(rand() % 100) / 10; 
    }
}

void ShowArrayDouble(double array[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

double FindMinDouble(double array[], int size) {
    double minVal = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < minVal) {
            minVal = array[i];
        }
    }
    return minVal;
}

double FindMaxDouble(double array[], int size) {
    double maxVal = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > maxVal) {
            maxVal = array[i];
        }
    }
    return maxVal;
}

void SortArrayDouble(double array[], int size) {
    sort(array, array + size);
}

void EditArrayDouble(double array[], int size, int index, double newValue) {
    if (index >= 0 && index < size) {
        array[index] = newValue;
    }
}
