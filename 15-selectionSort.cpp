#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> a = {15, 13, 2, 9, 1};
    for (int i = 0; i < a.size() - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < a.size(); j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        swap(a[i], a[min]);
    }

    for (int i : a)
    {
        cout << i << " ";
    }

    return 0;
}