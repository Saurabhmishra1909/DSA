#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int a=n;
    while(n>0){
        int b=n%10;
        sum+=pow(b,3);
        n=n/10;
    }
    if(sum==a){
        cout<<"Armstrong no"<<endl;
    }
    else{
        cout<<"Not an Armstrong no"<<endl;
    }
    return 0;
}