class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        if(k>=p.size()){
            return p;
        }

         priority_queue<pair<int,int>> pq;
        
        for (int i = 0; i < p.size(); i++)
        {
            int u=(p[i][1]*p[i][1])+(p[i][0]*p[i][0]);
            pq.push(make_pair(u,i));
   

        }
        vector<vector<int> > ans;
        while(pq.size()>k){
            pq.pop();
        }
        while (k--)
        {
            pair<int,int> x=pq.top();
            pq.pop();
            vector<int> temp={p[x.second][0],p[x.second][1]};
            ans.push_back(temp);
        
        }
        
        
        return ans;
    }
};
