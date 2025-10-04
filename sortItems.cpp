// Sorting items in an array

#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool tobreak = true;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                tobreak = false;
            }
        }
        if (tobreak)
            break;
    }
}
int main()
{
    int n = 10, arr[10] = {15, 59, 48, 62, 35, 57, 68, 95, 51, 62};
    cout << "Before sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    bubblesort(arr, n);
    cout << "After sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
