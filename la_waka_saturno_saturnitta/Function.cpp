#include "function.h"

#include <iostream>
using namespace std;
void FillArrayInt(int arr[], int size) {
    for (int i = 0; i < size; i++)
        arr[i] = (i + 1) * 3; 
}

void ShowArrayInt(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int FindMinInt(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < min) min = arr[i];
    return min;
}

int FindMaxInt(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

void SortArrayInt(int arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

void EditArrayInt(int arr[], int size, int index, int newValue) {
    if (index >= 0 && index < size)
        arr[index] = newValue;
}

void FillArrayDouble(double arr[], int size) {
    for (int i = 0; i < size; i++)
        arr[i] = (i + 1) * 1.1;
}

void ShowArrayDouble(double arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

double FindMinDouble(double arr[], int size) {
    double min = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < min) min = arr[i];
    return min;
}

double FindMaxDouble(double arr[], int size) {
    double max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

void SortArrayDouble(double arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
            if (arr[j] < arr[i]) {
                double temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

void EditArrayDouble(double arr[], int size, int index, double newValue) {
    if (index >= 0 && index < size)
        arr[index] = newValue;
}

void FillArrayChar(char arr[], int size) {
    for (int i = 0; i < size; i++)
        arr[i] = 'A' + i;
}

void ShowArrayChar(char arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

char FindMinChar(char arr[], int size) {
    char min = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < min) min = arr[i];
    return min;
}

char FindMaxChar(char arr[], int size) {
    char max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

void SortArrayChar(char arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
            if (arr[j] < arr[i]) {
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

void EditArrayChar(char arr[], int size, int index, char newValue) {
    if (index >= 0 && index < size)
        arr[index] = newValue;
}
