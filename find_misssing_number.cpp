class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i+1]-nums[i]==2){
                ans =nums[i]+1;
            }        
        }
        if(nums[n-1]!=n){
            ans= n;
        }
        return ans;
    }
};
