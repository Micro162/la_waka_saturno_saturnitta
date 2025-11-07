#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>
using namespace std;

void FillArrayInt(int arr[], int size);
void ShowArrayInt(int arr[], int size);
int FindMinInt(int arr[], int size);
int FindMaxInt(int arr[], int size);
void SortArrayInt(int arr[], int size);
void EditArrayInt(int arr[], int size, int index, int newValue);

void FillArrayDouble(double arr[], int size);
void ShowArrayDouble(double arr[], int size);
double FindMinDouble(double arr[], int size);
double FindMaxDouble(double arr[], int size);
void SortArrayDouble(double arr[], int size);
void EditArrayDouble(double arr[], int size, int index, double newValue);

void FillArrayChar(char arr[], int size);
void ShowArrayChar(char arr[], int size);
char FindMinChar(char arr[], int size);
char FindMaxChar(char arr[], int size);
void SortArrayChar(char arr[], int size);
void EditArrayChar(char arr[], int size, int index, char newValue);


#ifdef INTEGER
#define FillArray FillArrayInt
#define ShowArray ShowArrayInt
#define FindMin FindMinInt
#define FindMax FindMaxInt
#define SortArray SortArrayInt
#define EditArray EditArrayInt
#elif defined(DOUBLE)
#define FillArray FillArrayDouble
#define ShowArray ShowArrayDouble
#define FindMin FindMinDouble
#define FindMax FindMaxDouble
#define SortArray SortArrayDouble
#define EditArray EditArrayDouble
#elif defined(CHAR)
#define FillArray FillArrayChar
#define ShowArray ShowArrayChar
#define FindMin FindMinChar
#define FindMax FindMaxChar
#define SortArray SortArrayChar
#define EditArray EditArrayChar
#endif

#endif
