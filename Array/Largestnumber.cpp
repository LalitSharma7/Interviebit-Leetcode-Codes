int func(string a, string b)
{
    string ab = a.append(b);
    string ba = b.append(a);
    
    return a.compare(b)>0?1:0;
}
string Solution::largestNumber(const vector<int> &A) {
    
    string ans = "";
    vector<string>str;
    int n = A.size();
    int count =0;
    
    for(int i=0;i<n;i++)
    {
        if(A[i]=='0')
           count++;
        str.push_back(to_string(A[i]));
    }
    sort(str.begin(),str.end(),func);
    if(count==n)
    {
        return 0;
    }
     for(int i=0;i<n;i++)
    {
        ans+=str[i];
    }
     return ans;
}
