class Solution {
public:
    bool isAnagram(string s, string t) {
       int m = s.size();
       int n = t.size();
        
       if(m!=n)
           return false;
        
        unordered_map<char,int> mp;
        
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
            mp[t[i]]--;
            
        }
        
        for(int i=0;i<n;i++)
        {
            if(mp[s[i]]!=0)
                return false;
        }
        
        return true;
    }
};
