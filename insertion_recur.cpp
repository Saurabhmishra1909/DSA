#include<iostream>
using namespace std;

void Isort(int a[],int n){
    if(n==0 || n==1){
        return;
    }
    for(int i=2;i<n-1;i++){
            swap(key,a[i+1]);
        }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Isort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}