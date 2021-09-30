string Solution::solve(string str) {
    
    queue<char>q;
    string ans ="";
    vector<int>v(26,0);
    
    for(char c:str)
    {
        q.push(c);
        v[c-'a']++;
        while(!q.empty()&&v[q.front()-'a']>1)
        {
            q.pop();
        }
        
        if(!q.empty())
        {
            ans+=q.front();
        }
        
        else
        {
            ans+='#';
        }
    }
    
    return ans;
    
}
