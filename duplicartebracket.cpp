#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    stack<> st;
    for(int i=0;i<s.length();i++){
        if(s[i]!=')'){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.peek()==')'){
                
            }
        }
    }
}

int main()
{
    string s="(a+b)+((c+d))";
    check(s);

    return 0;
}