int findright(vector<int>a, int x)
{
    int n = a.size();
    int l=0;
    int h =n-1;
    int ans = -1;
    
    while(l<=h)
    {
        int mid = l+(h-l)/2;
        
        if(a[mid]==x)
        {
            ans = mid;
            l = mid+1;
        }
        
        else if(a[mid]>x)
        {
            h = mid-1;
        }
        
        else
        {
            l= mid+1;
        }
    }
    
    return ans;
    
}

int findleft(vector<int>a,int x)
{
    int n = a.size();
    int l=0;
    int h=n-1;
    int ans =-1;
    
    while(l<=h)
    {
        int mid = l+(h-l)/2;
        
        if(a[mid]==x)
        {
            ans = mid;
            h =mid-1;
        }
        
        else if(a[mid]>x)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    
    return ans;
}

vector<int> Solution::searchRange(const vector<int> &A, int B) {
    
    int right = findright(A,B);
    int left = findleft(A,B);
    vector<int>v;
    v.push_back(left);
    v.push_back(right);
    
    return v;
}
