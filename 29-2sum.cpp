#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool twoSum(vector<int> &nums, int target)
{
    int left = 0;
    int sum = 0;
    int right = nums.size() - 1;
    sort(nums.begin(), nums.end());
    while (left < right)
    {
        sum = nums[left] + nums[right];
        if (sum < target)
            left++;
        if (sum > target)
            right--;
        if (sum == target)
            return true;
    }
    return false;
}

int main()
{

    vector<int> a = {2, 7, 11, 15};
    int target = 9;
    cout << twoSum(a, target);
}