#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // for (auto it : mpp)
    // {
    //     cout << it.first << "->" << it.second << en  dl;
    // }

    int q;
    cin >> q;
    while (q--)
    {
        int numb;
        cin >> numb;
        cout << mpp[numb] << endl;
    }

    return 0;
}