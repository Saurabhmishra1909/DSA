//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int num=0;
        int j=0;
        int check=1;
        if(str[0]=='-'){
            j=1;
            check=-1;
        } 
        for(int i=j;i<str.length();i++){
            if(!isdigit(str[i])) return -1;
            num=num*10+str[i]-'0';
        }
        return num*check;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends