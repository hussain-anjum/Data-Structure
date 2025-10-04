// Deleting an item from an array

#include <bits/stdc++.h>
using namespace std;

int deleteitem(int *arr, int n, int pos)
{
    --pos;
    if (n == 0 || n == 1)
        return 0;
    --n;
    for (int i = pos; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    return n;
}
int main()
{
    int n = 10, arr[10] = {15, 59, 48, 62, 35, 57, 68, 95, 51, 62};
    cout << "Before deleting an item : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    n = deleteitem(arr, n, 6);
    cout << "After deleting 6th item : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
