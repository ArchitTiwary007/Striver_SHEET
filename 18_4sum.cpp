class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    // int n=nums.size();
    // set<vector<int>>st;
    // sort(nums.begin(),nums.end());//sort first

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         for(int k=j+1;k<n;k++)
    //         {
    //           for(int l=k+1;l<n;l++)
    //           {
    //             long long sum = (long long)nums[i]+nums[j]+nums[k]+nums[l];
    //             if(sum==target)
    //             {
    //                 vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
    //                 st.insert(temp);
    //             }
    //           }
    //         }
    //     }
    // }
    // return vector<vector<int>>(st.begin(),st.end());
    // }
    
    int n=nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++)
    {
        if(i>0&&nums[i]==nums[i-1])
        continue;
        for(int j=i+1;j<n;j++)
        {
            if(j>i+1 && nums[j]==nums[j-1])//condition correction for j as it is compared using i,i+1!!
            continue;
            //two pointers
            int left=j+1,right=n-1;//next of j left ko assign kro!!
            while(left<right)
            {
              long long sum=(long long)nums[i]+nums[j]+nums[left]+nums[right];
              if(sum==target){
              ans.push_back({nums[i],nums[j],nums[left],nums[right]});
              //MOve left pointer skipping duplicates!!
              while(left<right && nums[left]==nums[left+1])//left m plus  
              {
                left++;
              }
              while(left<right && nums[right]==nums[right-1])//right m minus
              {
                right--;
              }
              left++;
              right--;
              }
              else if(sum<target)
              {
                left++;
              }
              else
              right--;
            }
        }
    }
        return ans;
    }
};