/**Given an array of size N 
**containing only 0s, 1s, and 2s;
**sort the array in ascending order.**/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void swap(int arr[],int &a,int &b){
    int c=arr[b];
    arr[b]=arr[a];
    arr[a]=c;
}
int main()
{
    int arr[] = {0, 1, 0, 0, 2, 1, 0, 0};
    int n = 8;
    int mid=0;
    int high = n - 1;
    int low = 0;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr,low,mid);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr,mid,high);
            high--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
