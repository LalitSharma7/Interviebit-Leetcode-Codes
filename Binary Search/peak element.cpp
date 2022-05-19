class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
       /* int start = 0;
        int end = arr.size()-1;
        
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid-1])
                return mid;
            
            else if (arr[mid]<arr[mid+1])
                start = mid+1;
            
            else if(arr[mid]<arr[mid-1])
                end = mid-1;
        }
        
        return -1;
        */
        
        int start =0 , end = arr.size() - 1;
        int mid = start + (end - start )/2;
        
        while(start <= end ){
            
            mid = (end - start) / 2 + start;
            if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) return mid;
            else if (arr[mid] < arr[mid + 1]) start = mid + 1;
            else if (arr[mid] < arr[mid - 1]) end = mid - 1;
        }
        return -1;
    }
};
