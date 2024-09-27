#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int l, int m, int r)
{
    vector<int> temp;
    int left = l;
    int right = m + 1;

    while (left <= m && right <= r)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= m)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= r)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = 0; i < temp.size(); i++)
    {
        arr[l + i] = temp[i];
    }
}

void mergeSort(vector<int> &arr, int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main()
{
    vector<int> arr = {9, 1, 2, 3, 10, 11, 18, 4};
    mergeSort(arr, 0, arr.size() - 1);
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}
