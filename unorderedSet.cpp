#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string>s;
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        s.insert(str);
    }
    for(auto a:s){
        cout<<a<<endl;
    }
    return 0;
}