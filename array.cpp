#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
  float a;
  cin>>a;
  if(a<1000){
    cout<<fixed<<setprecision(2)<<a;
  }
  else if(a>1000 && a<=10000){
    cout<<fixed<<setprecision(2)<<a-(a*0.05);
  }
  else if(a>=5001 && a<=10000){
    float b;
    b=a*0.05*2;
    cout<<fixed<<setprecision(2)<<b;
  }
  else{
    float b;
    if(a>10000 && a<=30000){
      b=a-(a*0.15);
      cout<<fixed<<setprecision(2)<<b;
    }
    else{
      b=a-(a*0.17);
      cout<<fixed<<setprecision(2)<<b;
    }
  }
   return 0;
}