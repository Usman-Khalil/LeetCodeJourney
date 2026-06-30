class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0 , bottom = matrix.size() - 1 , left = 0 , right = matrix[0].size() - 1 , start , end;
        vector<int>ans;
        while(left <= right && top <= bottom)
        {
            //left to right 
            start = left;
            end = right;
            while(start <= end)
            {
                ans.push_back(matrix[top][start]);
                start++;
            }
            top++;
            start = top;
            end = bottom;
            while(start <= end)
            {
                ans.push_back(matrix[start][right]);
                start++;
            }
            right--;
            if(top <= bottom)
            {
                start = right ;
                end = left;
                while(start >= end)
                {
                    ans.push_back(matrix[bottom][start]);
                    start--;
                }
            }
            bottom--;
            if(left <= right)
            {
                start = bottom;
                end = top;
                while(start >= end)
                {
                    ans.push_back(matrix[start][left]);
                    start--;
                }
            }
            left++;
        }
        return ans;
    }
};