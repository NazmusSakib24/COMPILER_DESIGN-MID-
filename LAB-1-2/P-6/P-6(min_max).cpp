#include <iostream>
#include "P-6.h"
using namespace std;

int main()
{
    int n;
    cout << "How many numbers?: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int minVal = findMin(arr, n);
    int maxVal = findMax(arr, n);

    cout << "Minimum value: " << minVal << endl;
    cout << "Maximum value: " << maxVal << endl;

    return 0;
}
