#include<iostream>
using namespace std;
int main()
{
    int arr[5]={11,2,9,16,15};
    int n=5,i=1,temp=0;
    while(temp!=n)
    {
        if(i<n)
        {
            if( arr[temp]<arr[i])
            {
                cout<<arr[temp]<<"-->"<<arr[i]<<endl;
                temp++;
                i=temp;
            }
            i++;

        }
        else{
            cout<<arr[temp]<<"-->"<<"-1"<<endl;
            temp++;
            i=temp;
            i++;
        }
    }
}