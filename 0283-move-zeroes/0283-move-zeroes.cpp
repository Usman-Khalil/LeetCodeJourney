class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() == 1)
            return ;
        int p1 = 0 , p2 = 1;
        while(p1 < nums.size())if(nums[p1] == 0) break; else p1++;
        p2 = p1 + 1;
        while(p1 < nums.size() && p2 < nums.size())
        {
            if(nums[p2] != 0)
            {
                swap(nums[p1] , nums[p2]);
                p1++;
            }
            else
                p2++;
        }
    }
};