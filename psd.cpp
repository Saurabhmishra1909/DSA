#include<iostream>
using namespace std;

int main()
{
    int a[5]={12,2,34,11,45};
    for(int i=4;i>=0;i--){
        if(i==0){
                cout<<a[i]<<"-->"<<-1<<endl;
        }
        for(int j=i-1;j>=0;j--){
            if(a[j]>a[i]){
                cout<<a[i]<<"-->"<<a[j]<<endl;
                break;
            }
            else{
                cout<<a[i]<<"-->"<<-1<<endl;
                break;
            }
        }
    }
    return 0;
}