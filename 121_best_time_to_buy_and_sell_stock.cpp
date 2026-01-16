class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        // int maxp=0;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         int profit=prices[j]-prices[i];
        //     maxp=max(maxp,profit);

        //     }
        // }
        // return maxp;

        //optimised!!
        int maxp=0;
        int minprice=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(prices[i]<minprice)
            minprice=prices[i];

            int profit=prices[i]-minprice;

            if(profit>maxp)
            {
                maxp=profit;
            }
        }
        return maxp;
    }
};