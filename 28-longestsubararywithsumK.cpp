#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findMaxWithSum(vector<int> a, int k)
{
    map<long long, int> presumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }

        long long rem = sum - k;
        if (presumMap.find(rem) != presumMap.end())
        {
            int len = i - presumMap[rem];
            maxLen = max(maxLen, len);
        }

        presumMap[sum] = i;
    }

    return maxLen;
}

int secondApproach(vector<int> a, int k)
{
    int right = 0, left = 0, maxLen = 0, sum = a[0];
    while (right < a.size())
    {
        while (left <= right && sum > k)
        {
            sum -= a[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < a.size())
            sum += a[right];
    }

    return maxLen;
}

int main()
{
    vector<int> a = {1, 2, 3, 1, 1, 1, 1};
    cout << findMaxWithSum(a, 3) << endl;

    cout << secondApproach(a, 4);
}