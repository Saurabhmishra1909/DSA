#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int n,a=0;
  cin>>n;
  for(int i=n/2;i>=1;){
    if(n%i==0){
      a=a+i;
      i--;
    }
    else{
      i--;
    }
  }
  if(a==n){
    cout<<"yes";
  }
  else{
    cout<<"no";
  }
   return 0;
}