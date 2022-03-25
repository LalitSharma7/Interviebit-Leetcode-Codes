class Solution {
public:
    string frequencySort(string s) {
        
        //same concept frequency map mai store karke heap mai dalke dusre wale se store karke string mai daalna hai bas
        
        unordered_map<char, int> m;
        
        for(int i = 0; i < s.length(); i++) ++m[s[i]];
        
        priority_queue<pair<int, char>> pq;
        
        for(auto x : m) pq.push({x.second, x.first});
        
        string ans = "";
        
        while(!pq.empty()){
            int num = pq.top().first;
            
            while(num--){
                ans += pq.top().second;
            }
            
            pq.pop();
        }
        
        return ans;
        
    }
};
