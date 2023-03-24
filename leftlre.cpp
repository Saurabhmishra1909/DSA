#include<iostream>
using namespace std;

int main()
{
    int a[8]={23,0,18,11,17,1,16,15};
    int i=7,j=6;
    while(i>=0){
        if(a[j]>a[i] && j>=0){
            cout<<a[j]<<" "<<"<--"<<" "<<a[i]<<endl;
            i--;
            j--;
            j=i; 
        }
        else {
            j--;
        } 
    }
    return 0;
}