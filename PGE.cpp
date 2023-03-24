#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void pGE(int arr[],int size){
    int count=1;
    if(size==1){
        cout<<"1"<<endl;
        return;
    }
    int max=arr[size-1];
    for(int j=size-2;j>=0;j--){
        if(arr[j]<max){
            count++;
        }
        else{
             break;
         }
    }cout<<count<<endl;
    pGE(arr,size-1);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pGE(arr,n);
    return 0;
}