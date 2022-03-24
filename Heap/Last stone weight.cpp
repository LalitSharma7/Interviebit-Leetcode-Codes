
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int,vector<int>>q;
        for(auto x:stones){
            q.push(x);
        }
        while(q.size()>1){
            int a=q.top();
            q.pop();
            int b=q.top();
            q.pop();
            if(a!=b){
                q.push(a-b);
            }
        }
        if(q.size()==NULL) return 0;
        else return q.top();
        
    }
};
