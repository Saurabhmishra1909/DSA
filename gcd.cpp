#include<iostream>
int gcd(int i, int j)
{
  if(j!=0)
  {
    return gcd(j,i%j);
  } 
  else{
    return i;
  }
 }
int main(){
    int i=15,j=20;
    cout<<gcd(i,j);
    return 0;
}