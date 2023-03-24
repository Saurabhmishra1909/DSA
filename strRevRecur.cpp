#include<iostream>
using namespace std;
bool reverse(string &str,int i,int j){
       if(i>j){
        return true;
       }
       if(str[i]!=str[j]){
         return false;
       }
       else
        reverse(str,i+1,j-1);
}

int main()
{
    string str;
    cin>>str;
    bool isPalindrome=reverse(str,0,str.length()-1);
    if(isPalindrome){
        cout<<"Plaindrome"<<endl;
    }
    else
    cout<<"not a palindrome"<<endl; 
    return 0;
}