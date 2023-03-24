#include<iostream>

using namespace std;
int recur(int n){
    if(n==0){
        return 0;
    }
    int prev=recur(n-1);
    return n+prev;
}

int main()
{
    int n;
    cin>>n;
    cout<<recur(n);
    return 0;
}