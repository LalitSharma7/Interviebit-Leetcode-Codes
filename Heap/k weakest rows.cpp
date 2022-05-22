class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        //good question based on priortiy queue
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> pq;
        vector<int>ans;
        
        for(int i=0;i<mat.size();i++)
        {
            int count =0;
            
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==0)
                    break;
                
                else
                    count++;
            }
            
            pq.push({count,i});
        }
        
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};
