class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        //same concept use pair and store it itn max heap or min heap accordingly
        //TC is O(Nlogk + klogk)
        
        priority_queue<pair<int,int>> q;
        for(int i=0;i<arr.size();i++){
            q.push({abs(arr[i]-x),arr[i],});
            if(q.size()>k) q.pop();
        }
        vector<int> ans;
        while(q.size()){
            
            ans.push_back(q.top().second);
            q.pop();
            
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
