class Solution {
public:
int helper(vector<int>nums,int div)
    {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=(nums[i]+div-1)/div;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
    //    int n=nums.size();
    //    int maxi=*max_element(nums.begin(),nums.end());//to find max elements
    //    for(int i=1;i<=maxi;i++)//1 to max element(divisor)
    //    {
    //    int sum=0;//sum of divisors
    //     for(int j=0;j<n;j++)//elements
    //     {
    //         sum+=((nums[j]+i-1)/i);//ceiling
    //     }

    //     if(sum<=threshold)
    //     return i;//i=>divisor here and that is required
    //    }
    //     return -1;


    //optimised!!

    

    int n=nums.size();
    int maxi=*max_element(nums.begin(),nums.end());
    int start=1;
    int end=maxi;

    if(n>threshold)
    return -1;

    while(start<=end)
    {
        int sum=0;
        int mid=start+(end-start)/2;
        if(helper(nums,mid)<=threshold)
        {
            end=mid-1;//try smaller value
        }
        else{
            start=mid+1;
        }
    }
    return start;
    }
};
