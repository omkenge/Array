/**minimum and maximum**/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int minarr(int arr[], int n)
{
    int a = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        a = min(arr[i], a);
    }
    return a;
}
int maxarr(int arr[], int n)
{
    int a = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        a = max(arr[i], a);
    }
    return a;
}
int main()
{
    int arr[] = {2, 4, 0, 2, 3};
    int n = 5;
    cout << minarr(arr, n) << "   " << maxarr(arr, n) << endl;
    return 0;
}