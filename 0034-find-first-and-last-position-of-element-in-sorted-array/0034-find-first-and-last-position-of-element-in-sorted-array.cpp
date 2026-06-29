class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int keyValue) {
        if(arr.empty())
            return {-1 , -1};
        int start = 0 , end = arr.size() - 1;
        int mid;
        vector<int>nums(2,-1);
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (arr[mid] == keyValue)
                break;
            else if (arr[mid] < keyValue)
                start = mid + 1;
            else
                end = mid - 1;
        } 
        if(arr[mid] == keyValue)
        {
            int left = mid , right = mid;
            while(left > 0)
            {
                if(arr[left] == arr[left - 1])
                    left--;
                else
                    break;
            }
            while(right < arr.size() - 1)
            {
                if(arr[right] == arr[right + 1])
                    right++;
                else
                    break;
            }
            nums[0] = left;
            nums[1] = right;
        }
        // cout << nums[0] << ' ' << nums[1] << endl;
        return nums;
    }
};