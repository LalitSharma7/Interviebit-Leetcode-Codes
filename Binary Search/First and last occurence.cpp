class Solution {
    
int searchStart(vector<int>& nums, int target){
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int ans1 = -1;
    
    while(s<=e){
        int mid = s+(e-s)/2;
        if(nums[mid] == target){
            ans1 = mid;
            e = mid-1;
        }else if(nums[mid]<target){
            s = mid+1;
        }else{
            e = mid-1;
        }
        
    }
    return ans1;
}
    
int searchLast(vector<int>& nums, int target){
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int ans2 = -1;
    
    while(s<=e){
        int mid = s+(e-s)/2;
        if(nums[mid] == target){
            ans2 = mid;
            s = mid+1;
        }else if(nums[mid]<target){
            s = mid+1;
        }else{
            e = mid-1;
        }
        
    }
    return ans2;
}    
    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>p;
        p.push_back(searchStart(nums, target));
        p.push_back(searchLast(nums, target));  
        
        return p;
    }
};
