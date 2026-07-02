class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int strt  , end ;
        int i = 0;
        int size = nums.size();
        while(i < size )
        {
            strt = nums[i];
            if((i + 1 < size) && (nums[i] == nums[i + 1] - 1))
            {
                while((i + 1 < size) && (nums[i] == nums[i + 1] - 1))
                    i++;
                end = nums[i];
                i++;
            }
            else
            {
                end = nums[i];
                i++;
            }
            if(strt == end)
                ans.push_back(to_string(strt));
            else
                ans.push_back(to_string(strt) + "->" + to_string(end));
        } 
        return ans;
    }
};