#include <iostream>
#include <vector>
using namespace std;

int stock(vector<int> a)
{
    int bestBuy = a[0];
    int maxProfit = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > bestBuy)
        {
            maxProfit = max(maxProfit, a[i]);
        }

        bestBuy = min(bestBuy, a[i]);
    }
    return maxProfit;
};

int main()
{
    vector<int> a = {7, 1, 4, 6, 5};
    cout << stock(a) << endl;
}