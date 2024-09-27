#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a = {15, 13, 2, 9, 1};
    for (int i = 0; i < a.size() - 1; i++)
    {
        int swapCount = 0;
        for (int j = 0; j < a.size() - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                swapCount++;
            }
            if (swapCount == 0)
            {
                break;
            }
        }
    }

    for (int i : a)
    {
        cout << i << " ";
    }

    return 0;
}