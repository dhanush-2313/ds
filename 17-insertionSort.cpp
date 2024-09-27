#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {15, 13, 2, 9, 1};
    for (int i = 0; i < arr.size(); i++)
    {
        int swapCount = 0;
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
            swapCount++;
        }
        if (swapCount == 0)
        {
            break;
        }
    }

    for (int i : arr)
    {
        cout << i << " ";
    }
}