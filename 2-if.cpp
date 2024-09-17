#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch > 96 && ch < 123)
    {
        cout << "Lower case";
    }
    else if (ch > 64 && ch < 91)
    {
        cout << "Upper case";
    }

    else if (ch > 47 && ch < 58)
    {
        cout << "Number";
    }
    else
    {
        cout << "symbol";
    }
    return 0;
}