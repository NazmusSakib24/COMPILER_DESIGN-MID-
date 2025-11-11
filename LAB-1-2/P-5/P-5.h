#include<iostream>
using namespace std;

float average(int arr[], int n)
{
    float sum = 0;
    for (int i = 0; i < n ; i++)
    {
        sum = sum + arr[i];
    }

    return sum/n;
}