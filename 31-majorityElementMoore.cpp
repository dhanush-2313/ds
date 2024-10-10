#include <iostream>
#include <vector>
using namespace std;

int checkMajorityElement(vector<int> arr)
{
    int cnt = 0, ans = 0;
    for (auto it : arr)
    {
        if (cnt == 0)
        {
            ans = it;
        }
        if (ans == it)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 4, 4, 4, 2};
    cout << checkMajorityElement(arr);

    return 0;
}