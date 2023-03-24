#include<iostream>
#include<cstdio>
#include<cmath>
#include<bits/stdc++.h>
// Include headers as needed

using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
    
    int b=-999,c=-999;
    for(int i=0;i<n;i++){
      if(a[i]>c){
        b=c;
        c=a[i];
      }
      else if(a[i]>b && a[i]!=c){
        b=a[i];
      }
    }
     if(b==-999){
      cout<<0<<endl;
     }
    else
      cout<<b<<endl;
  /*sort(a,a+n);
  /*for(int i=0;i<n;){
    if(a[i]<a[i+1]){
      i++;
    }
    else{
      a[i]=a[i+1];
      a[i+1]=b;
      b=a[i];
    }*/
   // cout<<a[n-2];
    // Write your code here

    return 0;
}
