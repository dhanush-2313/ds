#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// brute
//  int findSecondLargestBrute(vector<int> arr)
//  {
//      int largest = INT_MIN;
//      for (int i : arr)
//      {
//          if (i > largest)
//              largest = i;
//      }

//     int temp = INT_MIN;
//     for (int i : arr)
//     {
//         if (i > temp && i != largest)
//         {
//             temp = i;
//         }
//     }
//     return temp;
// }

int findSecondBest(vector<int> &arr)
{
    int largest = arr[0];
    int secLargest = -1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[i + 1] && arr.size() == 2)
        {
            return -1;
        }
        if (arr[i] > largest)
        {
            secLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secLargest)
        {
            secLargest = arr[i];
        }
    }
    return secLargest;
}

int returnUniqueElement(vector<int> arr)
{
    int i = 0;
    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

int checkAray(vector<int> arr)
{
    int count = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
        }
    }
    if (arr[0] < arr[arr.size() - 1])
    {
        count++;
    }

    if (count <= 1)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    vector<int> arr = {1, 2, 4, 7, 7, 5};
    // int ans = findSecondLargestBrute(arr);
    // cout << ans;
    int ans = findSecondBest(arr);
    cout << ans << endl;

    bool checkArrayortedAndRotated = checkAray({3, 4, 5, 1, 2});
    cout << checkArrayortedAndRotated << endl;

    int ansForRemoveDuplicates = returnUniqueElement({1, 1, 2, 2, 3, 3, 3, 4});
    cout << ansForRemoveDuplicates;
    return 0;
}