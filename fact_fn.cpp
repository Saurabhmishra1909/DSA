#include<iostream>
using namespace std;
int fact(int n){
    int fac=1;
    for(int i=2;i<=n;i++){
        fac=fac*i;
    }
    return fac;
}
int main(){
    int n;
    cin>>n;
    int ans= fact(n);;
    cout<<ans;
    return 0;
}