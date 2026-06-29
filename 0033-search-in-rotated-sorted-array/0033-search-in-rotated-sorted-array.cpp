class Solution {
public:
    int search(vector<int>& arr, int keyValue)  {
        int start = 0 , end = arr.size() - 1;
        int mid;
        while(start <= end)
        {
            int mid = start + (end - start) / 2;

            if(arr[mid] == keyValue)
                return mid;

            if(arr[start] <= arr[mid])      
            {
                if(arr[start] <= keyValue && keyValue < arr[mid])
                    end = mid - 1;
                else
                    start = mid + 1;
            }
            else                          
            {
                if(arr[mid] < keyValue && keyValue <= arr[end])
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        } 
        return -1;
    }
};