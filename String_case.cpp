#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
// first way
int main()
{
    string str="abcdef";
    for(int i=0;i<=str.length();i++){
        str[i]-=32;
    }
    cout<<str<<endl;
     for(int i=0;i<=str.length();i++){
        str[i]+=32;
    }
    cout<<str<<endl;
    // 2nd way
    string s="saurabh";
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
    return 0;
}