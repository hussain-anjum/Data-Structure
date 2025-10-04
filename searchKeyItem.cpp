// Searching for a key item in the array

#include <bits/stdc++.h>
using namespace std;

int search(int *arr, int N, int target)
{
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}
int main()
{
    int n = 10, arr[10] = {15, 59, 48, 62, 35, 57, 68, 95, 51, 62};
    cout << "items in the array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int target, flag;
    cout << "Enter what you want to search : ";
    cin >> target;
    flag = search(arr, n, target);
    if (flag == -1)
        cout << target << " is not in the array." << endl;
    else
        cout << target << " is at the " << flag + 1 << "th position in the array." << endl;
    return 0;
}
