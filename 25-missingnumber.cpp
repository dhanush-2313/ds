#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findMissingArray(vector<int> a, int n)
{
    int x1 = 0, x2 = 0;
    for (int i = 0; i < n; i++)
    {
        x1 = x1 ^ a[i];
        x2 = x2 ^ (i + 1);
    }
    return x1 ^ x2;
}

int main()
{
    vector<int> a = {3, 0, 1};

    cout << findMissingArray(a, a.size());
}