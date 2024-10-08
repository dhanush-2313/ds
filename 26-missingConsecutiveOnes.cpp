#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findOnes(vector<int> a, int n)
{
    int maxi = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            count++;
            maxi = max(maxi, count);
        }
        else
            count = 0;
    }
    return maxi;
}

int main()
{
    vector<int> a = {1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1};
    cout << findOnes(a, a.size());
}