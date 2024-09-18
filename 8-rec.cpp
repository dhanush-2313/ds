#include <iostream>
using namespace std;

// void swapFunc(int i, int arr[], int n)
// {
//     if (i >= n / 2)
//     {
//         return;
//     }
//     swap(arr[i], arr[n - i - 1]);
//     swapFunc(i + 1, arr, n);
// }

bool palindrome(int i, string &a)
{
    if (i >= a.size() / 2)
    {
        return true;
    }
    if (a[i] != a[a.size() - i - 1])
    {
        return false;
    }
    return palindrome(i + 1, a);
}

int main()
{
    string a = "madam";
    cout << palindrome(0, a);
    return 0;
}