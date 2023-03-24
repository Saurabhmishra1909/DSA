#include<iostream>
using namespace std;
int main()
{
    int arr[8]={23,0,18,11,17,1,50,15};
    int i=1,temp=0;
    while(temp>=0)
    {
        if((i-temp)<=i)
        {
            if( arr[temp]>arr[i])
            {
                cout<<arr[i]<<"-->"<<arr[temp]<<endl;
                i++;
                temp=i;
            }temp--;

        }
        else{
            cout<<arr[i]<<"-->"<<"-1"<<endl;
            temp--;
            temp=i;
            i++;
        }
    }
}