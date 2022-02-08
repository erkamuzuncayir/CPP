#include <iostream>
#include "array.hpp"

using namespace std;

#define SIZE 10

// declaration

int main()
{
    int arr1[SIZE];

    initializeArray(arr1, SIZE);

    int arr2[SIZE];

    initializeArray(arr2, SIZE);

    int resultArray[SIZE];

    int *resultArray2;

    resultArray2 = productTwoArray(arr1, arr2, resultArray, SIZE);

    displayArray(resultArray2, SIZE);

    return 0;
}