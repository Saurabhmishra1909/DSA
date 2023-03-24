#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

int main()
{
  int n,b;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);
//   for(int i=0;i<n;i++){
    
//     // if(a[i]<a[i+1]){
//     //   i++;
//     // }
//     // else{
//     //   swap(a[i],a[i+1]);
      
//     // }
//     cout<<a[i]<<" ";
  //}
  cout<<endl;
  cout<<a[n-2];
    // Write your code here

    return 0;
}
