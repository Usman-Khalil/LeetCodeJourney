class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>leftSum(nums.size() , 0);
        vector<int>rightSum(nums.size() , 0);
        for(int i = 1 , j = nums.size() - 2 ; i < nums.size() ; i++ , j--)
        {
            leftSum[i] = leftSum[i - 1] + nums[i -1];
            rightSum[j] = rightSum[j + 1] + nums[j + 1];
        }
        for(int i = 0 ; i < nums.size() ; i++)
        {
            cout << rightSum[i] << ' ';
        }
        for(int i = 0 ; i < nums.size() ; i++)
        {
            leftSum[i] = abs(leftSum[i] - rightSum[i]);
        }
        for(int i = 0 ; i < nums.size() ; i++)
        {
            cout << leftSum[i] << ' ';
        }
        return leftSum;

    }
};