int sub(vector<int>&A, int B)
{
    if(B==0)
       return 0;
    
    int n = A.size();
    int total = 0;
    int diff = 0;
    
    int j=0;
    vector<int>cnt(40002);
     for(int i=0;i<n;i++){
            if(cnt[A[i]]==0){
                diff++;
                cnt[A[i]]++;
            }
            else{
                cnt[A[i]]++;
            }
            if(diff<=B){
                total+=(i-j+1);
            }
            else{ 
                while(j<n && j<=i && diff>B){
                    cnt[A[j]]--;
                    if(cnt[A[j]]==0)
                        diff--;
                    j++;
                }
                total+=(i-j+1);
            }
        }
        return total;
}

int Solution::solve(vector<int> &A, int B) {
    
    return sub(A,B) - sub(A, B-1);
}
