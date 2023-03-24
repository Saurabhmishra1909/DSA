#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;
void rotate(int a[],int size){
  for(int i=0;i<size-1;i++){
    
    swap(a[i],a[i+1]);
  }
}

int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    int ar[a];
    for(int i=0;i<a;i++){
      cin>>ar[i];
    }
    int b;
    cin>>b;
    for(int i=0;i<b;i++){
      rotate(ar,a);
    }
    for(int i=0;i<a;i++){
      if(i==a-1){
        cout<<ar[i];
      }
      else
      cout<<ar[i]<<" ";
    }cout<<endl;
  }
    return 0;
}