class Solution {
public:
// int robbery(int index,vector<int>& nums,vector<int>&dp)//REcursive+Top Down Dp
// {
//     if(index==0) return nums[0];

//     // if(index<0) return 0;
//     if(index==1) return max(nums[0],nums[1]);

//     if(dp[index]!=-1) return dp[index];

//     return dp[index]= max(nums[index]+robbery(index-2,nums,dp),robbery(index-1,nums,dp));//Top down DP
// }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        // return robbery(n-1,nums,dp);//n-1 size pass krna hoga!!
        // //Bottom up (Tabulation!!)
        // if(n==1) return nums[0];//Edge case
        // dp[0]=nums[0];
        // dp[1]=max(nums[0],nums[1]);

        // for(int i=2;i<n;i++)
        // {
        //     dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        // }
        // return dp[n-1];

        //Bottom Up + Space optimisation
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);

        int curr;
        int prev=max(nums[0],nums[1]);
        int prev2=nums[0];

        for(int i=2;i<n;i++)
        {
            curr=max(nums[i]+prev2,prev);
            prev2=prev;
            prev=curr;
        }
        return curr;
    }
};
