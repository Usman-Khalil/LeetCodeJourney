class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top = 0 , bottom = matrix.size() - 1, left = 0 , right = matrix[0].size() - 1 ,mid;
        while(top <= bottom)
        {
            mid = (top + bottom) / 2;
            if(matrix[mid][left] <= target && target <= matrix[mid][right])
            {
                int mid2 ;
                while(left <= right)
                {
                    mid2 = (left + right) / 2;
                    if(target == matrix[mid][mid2])
                        return true;
                    else if(target < matrix[mid][mid2])
                        right = mid2 - 1;
                    else if(target > matrix[mid][mid2])  
                        left = mid2 + 1;  
                } 
            }
            else if(target < matrix[mid][left])
                bottom = mid - 1;
            else if(target > matrix[mid][right])
                top = mid + 1;
        }
        return false;
    }
};