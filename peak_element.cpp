/**An element is called a peak element if its value is not smaller than 
**the value of its adjacent elements(if they exists).
Given an array arr[] of size N, find the index of any one of its peak elements.**/
#include <iostream>
using namespace std;
int findpeakelement(int arr[], int low, int high, int n)
{
    int mid = low + (high - low) / 2; // int Range madhe value yete
    if (mid == 0 || arr[mid - 1] <= arr[mid] && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
    {
        return mid;
    }
    else if (mid > 0 && arr[mid - 1] > arr[mid])
    {
        return findpeakelement(arr, low, mid - 1, n);
    }
    else
    {
        return findpeakelement(arr, mid + 1, high, n);
    }
}
int main()
{
    int arr[] = {0, 6, 8, 5, 7, 9};
    int n = 6;
    cout << "Peak Element index : " << findpeakelement(arr, 0, n - 1, n);
    return 0;
}
