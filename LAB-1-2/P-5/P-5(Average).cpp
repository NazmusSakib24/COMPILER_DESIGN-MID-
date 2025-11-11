#include<iostream>
#include "P-5.h"

using namespace std;

int main()
{
    int n ;
    cout << "How many numbers?: ";
    cin >> n;

    int arr[n];
    cout << "Enter "<< n << " numbers."<<endl;
    for (int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }

    float avg = average(arr, n);
    cout << "Average: " << avg << endl;
    return 0;
}