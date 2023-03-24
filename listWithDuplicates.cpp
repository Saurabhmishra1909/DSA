#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
void index(int arr[],int l,int k){
  if(arr[l]==k){
    cout<<l<<endl;
    return;
    exit(0);
  }
  else{
    return;
  }
  //int mid=(l+r)/2;
  //if(r>=l){
    //int mid=(l+r)/2;
    //if(arr[mid]==k){
    //cout<<mid<<endl;
    //}
    //else{
    //if(mid>k){
     // index(arr,l,mid-1,k);
    //}
    //else{
      //index(arr,mid+1,r,k);
    //}
    //}
  //}
  //return;
}
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    index(arr,i,k);
    break;
    }
  }
   return 0;
}