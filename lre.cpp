#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>stack;
    stack.push(21);
    stack.push(24);
    stack.push(23);
    stack.push(25);
    int num=0;
    stack.push(num);
    stack.pop();
    stack.pop();
    stack.pop();
    while(!stack.empty()){
        cout<<stack.top()<<" ";
        stack.pop();
    }
    

    return 0;
}