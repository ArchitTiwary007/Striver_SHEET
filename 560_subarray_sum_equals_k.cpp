class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int n=nums.size();
        // int count=0;
        // for(int i=0;i<n;i++)
        // {
        //     int sum=0;
        //     for(int j=i;j<n;j++)
        //     {
        //         sum+=nums[j];
        //         if(sum==k)
        //         count++;
        //     }
        // }
        // return count;

        //map
        int n=nums.size();
        unordered_map<int,int>m;//m=prefixSumCount
        int prefixsum=0;
        int count=0;
        m[0]=1;
        for(int i=0;i<n;i++)
        {
            prefixsum+=nums[i];///add current elem to prefix sum
            int remove=prefixsum-k;
            //if this sum has been seen before,add to its count to its result
            if(m.find(remove)!=m.end())
            count+=m[remove];

            m[prefixsum]++;//stores current prefix sum in map
            //increases its frequency because same prefix sum may appear again!!
        }
        return count;
    }
};