class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    //     int n=nums.size();
    //     if(n==0)
    //     return;
    //     k=k%n;//
    //     vector<int>temp(n);
    //     // int first=nums[0];
    //     for(int i=0;i<n;i++)
    //     {
    //         temp[(i+k)%n]=nums[i];
    //     }
    //    nums=temp;
    // }

    // int n=nums.size();
    // if(n==0) return;
    // k=k%n;
    // vector<int>t(n);
    // for(int i=0;i<n;i++)
    // {
    //     t[(i+k)%n]=nums[i];

    // }
    // nums=t;

//optimised
    int n=nums.size();
    // if(n==0) return ;
    k=k%n;
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());


    
    }

};
