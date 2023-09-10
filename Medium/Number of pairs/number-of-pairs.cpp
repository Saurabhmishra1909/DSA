//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
 

class Solution{
    public:
    
    // X[], Y[]: input array
    // M, N: size of arrays X[] and Y[] respectively
    //Function to count number of pairs such that x^y is greater than y^x.
      long long countPairs(int x[], int y[], int m, int n)
    {
        sort(x,x+m);
        sort(y,y+n);
        int zero=0;
        int one=0;
        int three=0;
        int two=0;
        int four=0;
  for(int i=0;i<n;i++){
      if(y[i]==0)
      zero++;
      if(y[i]==1)
      one++;
      if(y[i]==2)
      two++;
      if(y[i]==3){
          three++;
      }
      if(y[i]==4){
          four++;
      }
  }
  long long ans=0;
  for(int i=0;i<m;i++){
      if(x[i]==0)
      continue;
      else if(x[i]==1){
          ans+=zero;
      }else if(x[i]==2){
          int idx=upper_bound(y,y+n,2)-y;
            if(idx!=-1){
                    ans+=n-idx;
                }
          ans-=three;
          ans-=four;
          ans=ans+one+zero;
      }else{
          int idx=upper_bound(y,y+n,x[i])-y;
                if(idx!=-1){
                    ans+=n-idx;
                }
                ans += one +zero;
                if(x[i]==3){
                    ans+=two;
                }
          
      }
  }
  return ans;
    }


};


//{ Driver Code Starts.
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int M,N;
		cin>>M>>N;
		int i,a[M],b[N];
		for(i=0;i<M;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>b[i];
		}
		Solution ob;
		cout<<ob.countPairs(a, b, M, N)<<endl;
	}
}
// } Driver Code Ends