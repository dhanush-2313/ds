#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> a, vector<int> b)
{
    int i = 0;
    int j = 0;
    int n = a.size();
    int m = b.size();
    vector<int> ans;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < a[i])
        {
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    return ans;
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6};
    vector<int> b = {2, 3, 5};
    vector<int> ans = intersection(a, b);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}