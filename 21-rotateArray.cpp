#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// brute force approach
void Rotatetoleft(int arr[], int n, int k)
{
    if (n == 0)
        return;
    k = k % n;
    if (k > n)
        return;
    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = 0; i < n - k; i++)
    {
        arr[i] = arr[i + k];
    }
    for (int i = n - k; i < n; i++)
    {
        arr[i] = temp[i - n + k];
    }
}

// most optimal approach
void optimalrotate(int arr[], int k, int n)
{
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
    reverse(arr, arr + n);
}

int main()
{
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    // Rotatetoleft(arr, n, k);
    // cout << "After Rotating the elements to left " << endl;

    optimalrotate(arr, 3, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// reverse function for reference
/*
void reverseArray(int arr[],int start,int end){
while(start<=end){
int temp = arr[start];
arr[end]= arr[start];
start++;
end--;
}
}
*/