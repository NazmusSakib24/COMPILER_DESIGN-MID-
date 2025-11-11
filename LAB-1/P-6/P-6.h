#include <iostream>
using namespace std;

int findMin(int arr[], int n)
{
    int minVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minVal)
            minVal = arr[i];
    }
    return minVal;
}

int findMax(int arr[], int n)
{
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}
