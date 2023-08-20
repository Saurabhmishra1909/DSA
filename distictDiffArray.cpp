#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int distinctDifferenceArray(int & nums) {
        int n=5;
        //int temp[n];
        for(int i=0;i<n;i++){
            nums[i]=(i+i+1)-n;
        }
        for(int i=0;i<n;i++){
            return nums[i];
        }
    }
int main()
{
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
         cin>>nums[i];
    }
    for(int i=0;i<n;i++){
        distinctDifferenceArray(nums[i]);
    }
    for(int i=0;i<n;i++)
      cout<<nums[i]<<" ";
    return 0;
}