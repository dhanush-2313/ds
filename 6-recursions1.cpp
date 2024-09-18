#include <iostream>
using namespace std;

int count =0;
// count from 0 to n
void recurse(){
    if(count==4){
        return ;
    }
    cout<<count<<endl;
    count++;
    recurse();
}

void printNtimes(int i,int n){
    if(i>n){
        return;
    }
    cout << "dhanush" << endl;
    printNtimes(i+1,n);
}

void printNto1(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    cout << i << endl;
    printNto1(i - 1, n);
}

void backtracking1(int i ,int n){
    if (i < 1)
    {
        return;
    }
    backtracking1(i - 1, n);
    cout << i << endl;
}

void backtracking2(int i ,int n){
    if (i > n)
    {
        return;
    }
    backtracking2(i + 1, n);
    cout << i << endl;
}

int main()
{
    int n = 0;
    cin >> n;
    backtracking1(n, n);
    backtracking2(1, n);

}