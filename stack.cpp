#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    stack<int>s;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        s.push(ele); 
    }  
    cout<<s.top()<<endl;
    s.pop(); 
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    return 0;
}