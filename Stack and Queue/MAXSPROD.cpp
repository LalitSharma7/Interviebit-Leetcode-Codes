int Solution::maxSpecialProduct(vector<int> &A) {
     int n = A.size();
    if(n==1) return 0;
    stack<pair<long long ,long long>> st;
    long long  ans = 0;
    vector<long long > left(n,0);
    vector<long long> right(n,0);
    st.push(make_pair(A[0],0));
    for(int i =1;i<n;i++)
    {
        while(!st.empty() && st.top().first <= A[i])
            st.pop();
        if(st.empty())
            st.push({A[i],i});
        else
        {
            left[i] = st.top().second ;
            st.push({A[i],i});
        }
    }
    while(!st.empty())
        st.pop();
    st.push(make_pair(A[n-1],n-1));
    for(int i =n-2;i>=0;i--)
    {
        while(!st.empty() && st.top().first <= A[i])
            st.pop();
        if(st.empty())
            st.push({A[i],i});
        else
        {
            ans = max(ans,((left[i]) * (st.top().second)));
            st.push({A[i],i});
        }
    }
    return ans%1000000007;
    
}
