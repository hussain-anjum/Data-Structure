// Inserting an item in a given position in an array

#include <bits/stdc++.h>
using namespace std;

int Insert(int *arr, int N, int position, int item)
{
    if (N >= 100)
    {
        cout << "Array is full." << endl;
        return N;
    }
    if (position < 0 || position > N)
    {
        cout << "Invalid position." << endl;
        return N;
    }
    N++;
    for (int i = N - 1; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = item;
    return N;
}
int main()
{
    int n = 10, arr[100] = {15, 59, 48, 62, 35, 57, 68, 95, 51, 62};
    cout << "Before Insertion : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    n = Insert(arr, n, 0, 25);
    n = Insert(arr, n, -2, 30);
    n = Insert(arr, n, 20, 10);
    n = Insert(arr, n, n, 99);

    cout << "After Insertion : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
