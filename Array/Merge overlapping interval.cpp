bool compare(Interval a, Interval b)
{
    return a.start<b.start;
}
vector<Interval> Solution::merge(vector<Interval> &v) {
    sort(v.begin(), v.end(),compare);
    int n = v.size();
    vector<Interval>ans;
    //update the current interval only and push the last interval as it is as we dont need 
    //need to comapre the last interval here
    //just make and compartor function and sort according to starting of interval
    for(int i=0;i<n-1;i++)
    {
        
        if(v[i].end>=v[i+1].start)
        {
            v[i+1].start = min(v[i].start,v[i+1].start);
            v[i+1].end = max(v[i].end,v[i+1].end);
        }
        else
        {
            ans.push_back(v[i]);
        }
    }
    
    ans.push_back(v[n-1]);
    return ans;
}
