class Solution {
public:
    bool search(vector<int>& nums, int target) {
        //bruteforce_approach
        // int n=nums.size();
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]==target)
        //     return 1;
        // }
        // return 0;

        int n=nums.size();
        int start=0;
        int end=n-1;
    
        while(start<=end)
        {
            int mid=start+(end-start)/2;

            if(nums[mid]==target)
            return 1;

            if(nums[start]==nums[mid] && nums[end]==nums[mid])//to delete duplicate elems
            {
                start++;
                end--;
                continue;
            }
            //left side sorted!!
            if(nums[start]<=nums[mid])
            {
                if(nums[start]<=target && target<=nums[mid])
                {
                    end=mid-1;//target lies in left!!
                }
                else
                {
                    start=mid+1;//target in right!!
                }
            }
            else//right side sorted
            {
                if(nums[mid]<=target && target<=nums[end])
                {
                    start=mid+1;//target lies in right
                }
                else
                {
                    end=mid-1;//target lies in left
                }
            }
        }
        return 0;
    }
};
