#include<iostream>
using namespace std;
void fib(int n){
    long long a[n];
    a[0]= 0;
    a[1]= 1;
    for(int i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<endl;
    }
}
int main(){
    long n;
    cin>>n;
    fib(n);
    return 0;
}