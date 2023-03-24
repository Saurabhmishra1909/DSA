#include<iostream>
using namespace std;
int friendspair(int n){
    if(n==0||n==1||n==2){
        return n;
    }
    return (friendspair(n-1)+friendspair(n-2)*(n-1));
}

int main()
{
    int n;
    cin>>n;
    cout<<friendspair(n);
    return 0;
}