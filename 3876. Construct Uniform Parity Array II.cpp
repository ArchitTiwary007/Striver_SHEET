class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        // int odd=0;
        // if(nums1.size()==1) return true;
        // for(int i=0;i<nums1.size();i++)
        // {
        //     if(nums1[i] & 1)
        //     odd++;
        // }
        // if(odd==1) return false;

        // return true;

        // int min_nums1=*min_element(nums1.begin(),nums1.end());//minimum odd number khojo => parity change ho jae!!

        // if(min_nums1 & 1) return true;//minimum elem is odd=>true

        // //if min is even =>
        // //if any odd exists=>false
        // //otherwise=>true;  
        // for(int x:nums1)
        // {
        //     if(x & 1) return false;
        // }
        // return true;

        int min_nums1=*min_element(nums1.begin(),nums1.end());

        if(min_nums1 %2 ==1)//if smallest element is odd
        return true;//Then it can always be converted to odd

        for(int x:nums1)//check if we can make all even in nums2
        {
            if(x%2==1)
            return false;
        }

        return true;
    }
};
