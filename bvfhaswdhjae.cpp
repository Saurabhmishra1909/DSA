#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    if(n<=2){
        cout<<"-1";
    }
    else{
       
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        
        for(auto i;i<n;i++){
            cout<<arr[n-3];
            break;
        }
    }
    return 0;
}