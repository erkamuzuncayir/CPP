#include <iostream>
#include "array.hpp"

using namespace std;

// source code - implementation - function definition

void initializeArray(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = i;
    }
}

void displayArray(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] : " << a[i] << endl;
    }
}

// mathematical calculation

double sumArray(int *a, int SIZE)
{
    double sum = 0.0;

    for (int i = 0; i < SIZE; i++)
    {
        sum = sum + *(a + i);
    }

    return sum;
}

double meanArray(int *a, int SIZE)
{
    double meanValue = 0.0;

    for (int i = 0; i < SIZE; i++)
    {
        meanValue = sumArray(a, SIZE) / SIZE;
    }

    return meanValue;
}

// array - mathematical calculation

int *sumTwoArray(int *arr1, int *arr2, int *resultArr, int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        resultArr[i] = *(arr1 + i) + arr2[i];
    }
    return resultArr;
}

int *substractTwoArray(int *arr1, int *arr2, int *resultArr, int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        resultArr[i] = *(arr1 + i) - arr2[i];
    }
    return resultArr;
}

int *productTwoArray(int *arr1, int *arr2, int *resultArr, int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        resultArr[i] = *(arr1 + i) * arr2[i];
    }
    return resultArr;
}