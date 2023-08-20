#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

int main()
{
     int m;
    cout<<"Enter size of array: "<<endl;
    cin>>m;
	int arr[m];
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    stack<int> s;
    for(int i=m-1;i>=0;i--){
        if(s.empty()==true){
            cout<<-1<<endl;
            s.push(arr[i]);
        }
         if(s.empty()==false){
            if(s.top()>arr[i]){
                cout<<s.top()<<endl;
            }
            else{
                s.pop();
            }
        }
    }
    return 0;
}