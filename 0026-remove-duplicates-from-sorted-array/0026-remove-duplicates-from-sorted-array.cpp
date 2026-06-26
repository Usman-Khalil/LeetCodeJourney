class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ptr1 = 0 , ptr2 = 1;
        for(; ptr2 < nums.size() ;)
        {
            if(nums[ptr1] == nums[ptr2])
            {
                nums.erase(nums.begin() + ptr2);
            }
            else
            {
                ptr1++;
                ptr2++;
            }
        }
        return nums.size();
    }
};