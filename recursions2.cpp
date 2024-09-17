#include <iostream>
using namespace std;

//parameter approach
void summ(int i,int sum){
    if(i<1){
        cout << sum << endl ;
        return;
    }
    summ(i-1,sum+i);
}

//functional recursion
int ssum(int n){
    if(n==0){
    return 0;
    }

    return n + ssum(n-1);
}

int fact(int n){
    if(n==0){
        return 1;
    }
    return n * fact(n-1);
}

int main(){
    int n;
    cin >> n;
    summ(n,0);
    cout << ssum(n) << endl;
    cout << fact(n) << endl;
}