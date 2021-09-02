class three{
      public:
            int val, row, col;
  };
  
  struct comp{
      bool operator()(three a, three b){
          return a.val>b.val;
      }
  };

vector<int> Solution::solve(vector<vector<int> > &arr) {
 /* Method 01
 
    priority_queue<int, vector<int>, greater<int>> p;
    for(int i = 0; i<A.size(); i++){
        for(int j = 0; j<A[i].size(); j++){
            p.push(A[i][j]);
        }
    }
    
    vector<int> res;
    while(!p.empty()){
        res.push_back(p.top());
        p.pop();
    }
    
    return res;
 */
 
  priority_queue<three,vector<three>,comp>pq;
  int n = arr.size();
  int m = arr[0].size();
  for(int i=0;i<n;i++)
  {
      pq.push({arr[i][0],i,0});
  }
  
  vector<int>ans;
  while(!pq.empty())
  {
      three tp = pq.top();
      pq.pop();
      int val = tp.val, row = tp.row, col = tp.col;
      ans.push_back(val);
      if(col+1<m)
      {
          pq.push({arr[row][col+1],row,col+1});
      }
  }
  
  return ans;
 
  
  
}
