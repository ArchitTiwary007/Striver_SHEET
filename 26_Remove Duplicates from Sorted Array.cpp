class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
        return 0;

        int i=0;//slow pointer!!
        for(int j=1;j<nums.size();j++)//fast pointer!!
        {
            
            if(nums[i]!=nums[j])//not equal to previous
            i++;

            nums[i]=nums[j];//place to correct place
        }
        return i+1;//jahan tk no duplicates h wahan tk ka index ka elements 
    }
};
