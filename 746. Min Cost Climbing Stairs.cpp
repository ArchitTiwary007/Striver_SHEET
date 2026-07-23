class Solution {
public:
// int climbcost(int n,vector<int>&cost,vector<int>&dp)//Top down Dp
// {
//     if(n<=1) return 0;
//     if(dp[n]!=-1) return dp[n];


//     // return dp[n]=min(cost[n-1]+climbcost(n-1,cost,dp),cost[n-2]+climbcost(n-2,cost,dp));

//     //Bottom up approach or tabulation
//     dp[0]=0;
//     dp[1]=0;
//     for(int i=2;i<=n;i++)
//     dp[i]=min(cost[i-1]+dp[i-1],cost[i-2]+dp[i-2]);

//     return dp[n];
// }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        // vector<int>dp(n+1,-1);
        // return climbcost(n,cost,dp);

        //space optimised DP
        if(n<=1) return 0;

        int curr;
        int prev=0;
        int prev1=0;

        for(int i=2;i<=n;i++)
        {
            curr=min(cost[i-1]+prev,cost[i-2]+prev1);
            prev1=prev;
            prev=curr;
        }
        return curr;

    }
};
