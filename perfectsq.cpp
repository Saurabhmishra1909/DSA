#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
void square(int n){
  int a=sqrt(n);
  if(a*a==n){
    cout<<"yes";
  }
  else{
    cout<<"no";
  }
}
int main()
{
  int n;
  cin>>n;
  square(n);
   return 0;
}