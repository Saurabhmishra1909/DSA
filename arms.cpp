#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
void arms(int n){
    int c=n;
    int b=0,count=0;
    int temp=n;
    while(temp!=0){
        count++;
        temp=temp/10;
    }
  while(n>0){
  int a=n%10;
  n=n/10;
  b=b+pow(a,count);
  }
  if(b==c){
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
  arms(n);
   return 0;
}