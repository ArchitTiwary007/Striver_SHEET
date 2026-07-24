class Solution {
public:

// int robbery(vector<int>& arr)
// {
//     int n=arr.size();
//     if(n==0) return 0;
//     if(n==1) return arr[0];
//     if(n==2) return max(arr[0],arr[1]);

//     int curr;
//     int prev=max(arr[0],arr[1]);//1st index of dp
//     int prev2=arr[0];//0th index of dp

//     for(int i=2;i<n;i++)
//     {
//         curr=max(arr[i]+prev2,prev);
//         prev2=prev;
//         prev=curr;
//     }
//     return curr;
// }
    int rob(vector<int>& nums) {
        int n=nums.size();//size
        if(n==1) return nums[0];

        // vector<int>arr1(n-1);
        // vector<int>arr2(n-1);

        // for(int i=0;i<n-1;i++)
        // {
        //     arr1[i]=nums[i];
        // }
        // for(int i=1;i<n;i++)
        // {
        //     arr2[i-1]=nums[i];
        // }
        // int curr1=robbery(arr1);
        // int curr2=robbery(arr2);

        // return max(curr1,curr2);
        

        //space optimised+tabulation

        if(n==1) return nums[0];//Base Cases never forget in space optimisation
        if(n==2) return max(nums[0],nums[1]);

        int prev=max(nums[0],nums[1]),prev2=nums[0];
        int curr1=prev;//initialise
        for(int i=2;i<n-1;i++)
        {
            curr1=max(nums[i]+prev2,prev);
            prev2=prev;
            prev=curr1;
        }
        
        prev=max(nums[1],nums[2]),prev2=nums[1];
        int curr2=prev;//initialising is most imp
        for(int i=3;i<n;i++)
        {
            curr2=max(nums[i]+prev2,prev);
            prev2=prev;
            prev=curr2;
        }
        return max(curr1,curr2);
    }
};
