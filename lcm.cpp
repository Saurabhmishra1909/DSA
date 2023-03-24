#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  for(int i=a*b;i>=2;i--){
    if(i%a==0 && i%b==0){
      cout<<i;
      break;
    }
    else{
      continue;
    }
  }
   return 0;
}