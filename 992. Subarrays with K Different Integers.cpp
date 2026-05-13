class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        //atelast (k) and atleast (k+1)
        int total=0,start=0,end=0,count=0;
        int n=nums.size();
        unordered_map<int,int>freq;
        while(end<n)
        {
            freq[nums[end]]++;
            if(freq[nums[end]]==1)
            count++;
            while(count==k)
            {
                total+=n-end;
                freq[nums[start]]--;
                if(freq[nums[start]]==0)
                count--;

                start++;
            }
            end++;
        }
        start=0,end=0,count=0;
        freq.clear();
        k++;
        while(end<n)
        {
            freq[nums[end]]++;
            if(freq[nums[end]]==1)
            count++;
            while(count==k)
            {
                total-=n-end;
                freq[nums[start]]--;
                if(freq[nums[start]]==0)
                count--;

                start++;
            }
            end++;
        }
        return total;

    }
};
