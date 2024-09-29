#include <iostream>
#include <vector>
using namespace std;

void movezeros(vector<int> &a, int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
        return;

    for (int i = j + 1; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[j], a[i]);
            j++;
        }
    }
}

int main()
{
    vector<int> a = {1, 0, 2, 4, 0, 0, 8};
    movezeros(a, a.size());
    for (auto it : a)
    {
        cout << it << ' ';
    }
    return 0;
}