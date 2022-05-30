class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int m = s.length();
        int n = t.length();
        
        unordered_map<char,int>mp;
        
        for(int i=0;i<n;i++)
        {
            mp[t[i]]++;
        }
        
        for(int i=0;i<m;i++)
        {
            if(mp[s[i]])
            {
                mp[s[i]]--;
            }
        }
        char c;
        for(auto it = mp.begin();it!=mp.end();it++)
        {
            if(it->second == 1)
            {
                c = it->first;
            }
        }
        return c;
    }
};
