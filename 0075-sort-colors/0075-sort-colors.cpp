class Solution {
public:
    void sortColors(vector<int>& nums) {
        int countOf0 = 0 , countOf1 = 0 , countOf2 = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] == 0)
                countOf0++;
            else if(nums[i] == 1)
                countOf1++;
            else if(nums[i] == 2)
                countOf2++;
        }
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(countOf0 > 0)
                {nums[i] = 0;countOf0--;}
            else if(countOf1 > 0)
                {nums[i] = 1;countOf1--;}
            else if(countOf2 > 0)
                {nums[i] = 2;countOf2--;}
        }
    }
};