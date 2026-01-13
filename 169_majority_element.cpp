class Solution {
public:
    int majorityElement(vector<int>& nums) {
    //    int candidate,count=0,n=nums.size();
    //    for(int i=0;i<n;i++)
    //    {
    //     if(count==0)
    //     {
    //         count=1;
    //         candidate=nums[i];
    //     }
    //     else
    //     {
    //         if(candidate==nums[i])
    //         count++;
    //         else
    //         count--;
    //     }
    //    }
    // //count=0;
    // for(int i=0;i<n;i++)
    
    //     if(nums[i]==candidate)
    //     count++;
    //     if(count>n/2)
    //     return candidate;
    //     else 
    //     return -1;

    int n=nums.size();
    // for(int i=0;i<n;i++)//TLE
    // {
    // int count=0;

    //     for(int j=0;j<n;j++)
    //     {
    //         if(nums[j]==nums[i])
    //         count++;
    //     }
    //         if(count>n/2)
    //         return nums[i];
    // }
    // return -1;

    int count=0, elem=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==elem)
        count++;
        else if(nums[i]!=elem && count==0)
        {
            elem=nums[i];
            count++;
        }
        else
        count--;
    }
    return elem;
    }
};