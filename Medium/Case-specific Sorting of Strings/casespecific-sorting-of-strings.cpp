//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        string st="";
        string st2="";
        for(auto i:str){
             if(islower(i)) st+=i;
             else st2+=i;
        }
        sort(st.begin(),st.end());
        sort(st2.begin(),st2.end());
        string ans="";
        int j=0;
        int k=0;
        for(int i=0;i<str.length();i++){
            if(islower(str[i])) ans+=st[j++];
            else ans+=st2[k++];
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends