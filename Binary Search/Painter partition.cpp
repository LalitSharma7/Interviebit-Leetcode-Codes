bool is_valid(int A,vector<int>&C,int mid)
{
    long long int painter=1,sum=0;
    for(long long int i=0;i<C.size();i++)
    {
        sum+=C[i];
        if(sum>mid)
        {
            sum=C[i];
            painter++;
        }
        if(painter>A)
        {
            return false;
        }
    }
    return true;
}


int Solution::paint(int A, int B, vector<int> &C) {
     int start=INT_MIN,end=0;
    for(int i=0;i<C.size();i++)
    {
        start=max(start,C[i]);
        end+=C[i];
    }
    if(C.size()<=A)
    {
        return (start*B)%10000003;
    }
    long long int ans=start;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(is_valid(A,C,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return (ans*B)%10000003;
}
