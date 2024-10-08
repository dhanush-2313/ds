#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 1, 2, 3, 3, 4, 4, 5, 5};
    int n = a.size();
    int xorr = 0;
    for (auto it : a)
    {
        xorr = xorr ^ it;
    }

    cout << xorr;
}