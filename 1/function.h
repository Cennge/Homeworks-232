#pragma once
#ifndef FUNCTION_H
#define FUNCTION_H

#ifdef INTEGER
#define fillArray FillArrayInt
#define showArray ShowArrayInt
#define findMin FindMinInt
#define findMax FindMaxInt
#define sortArray SortArrayInt
#define editArray EditArrayInt

#elif defined(CHAR)
#define fillArray FillArrayChar
#define showArray ShowArrayChar
#define findMin FindMinChar
#define findMax FindMaxChar
#define sortArray SortArrayChar
#define editArray EditArrayChar

#elif defined(DOUBLE)
#define fillArray FillArrayDouble
#define showArray ShowArrayDouble
#define findMin FindMinDouble
#define findMax FindMaxDouble
#define sortArray SortArrayDouble
#define editArray EditArrayDouble
#endif

void FillArrayInt(int array[], int size);
void ShowArrayInt(int array[], int size);
int FindMinInt(int array[], int size);
int FindMaxInt(int array[], int size);
void SortArrayInt(int array[], int size);
void EditArrayInt(int array[], int size, int index, int newValue);

void FillArrayChar(char array[], int size);
void ShowArrayChar(char array[], int size);
char FindMinChar(char array[], int size);
char FindMaxChar(char array[], int size);
void SortArrayChar(char array[], int size);
void EditArrayChar(char array[], int size, int index, char newValue);

void FillArrayDouble(double array[], int size);
void ShowArrayDouble(double array[], int size);
double FindMinDouble(double array[], int size);
double FindMaxDouble(double array[], int size);
void SortArrayDouble(double array[], int size);
void EditArrayDouble(double array[], int size, int index, double newValue);

#endif
