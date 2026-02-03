class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int maxProd=nums[0];//initialise with first element
        // int n=nums.size();
        // for(int i=0;i<n;i++)
        // {
        //     int prod=1;
        //     for(int j=i;j<n;j++)
        //     {
        //         prod=prod*nums[j];

        //         maxProd=max(maxProd,prod);//update maximum product if needed!!
        //     }
        // }
        // return maxProd;

        // int n=nums.size();
        // int pref=1;
        // int suff=1;
        // int ans=INT_MIN;
        // for(int i=0;i<n;i++)
        // {
        //     if(pref==0)
        //     pref=1;
        //     if(suff==0)
        //     suff=1;
        //     pref*=nums[i];
        //     suff*=nums[n-i-1];
        //     ans=max(ans,max(pref,suff));
        // }
        // return ans;

        int n=nums.size();
        int ans=nums[0];
        int max_prod=nums[0];
        int min_prod=nums[0];

        for(int i=1;i<n;i++)
        {
            int curr=nums[i];
            
            if(curr<0)
            swap(max_prod,min_prod);

            //updation
            max_prod=max(curr,max_prod*curr);
            min_prod=min(curr,min_prod*curr);

            ans=max(ans,max_prod);//update global result!!
        }
        return ans;

    }
};