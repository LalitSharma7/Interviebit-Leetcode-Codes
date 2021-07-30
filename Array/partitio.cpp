int Solution::solve(int A, vector<int> &B) {
    
    /*int total = 0;
    
    for(int i=0;i<n;i++)
    {
        total+=B[i];
    }
    
    if(total%3!=0)
       return 0;
       
    
    int onethird = total/3;
    int twothird = 2*(total/3);
    int onethirdcount = 0;
    int count =0;
    int sum =0;
    
    for(int i=0;i<n-1;i++)
    {
        sum+=B[i];
        
        if(sum = twothird)
        {
            count+=onethirdcount;
        }
        
        if(sum = onethird)
        {
            onethirdcount = onethirdcount+1;
        }
    }
    
    return count;
    
    */
    
    int sum = 0;
    for(int i = 0; i < A; i++) sum += B[i];
    if(sum % 3 != 0 ) return 0;
    int sum13rd = sum/3;
    int sum23rd = 2 * sum13rd;
    int currSum = 0;
    int g13rd = 0;
    int count = 0;
    for(int i = 0; i < A - 1; i++) {
        currSum += B[i];
        if(currSum == sum23rd) count += g13rd;
        if(currSum == sum13rd) g13rd++;
    }
    //rumming till only A-1 is important for sum = 0. nd so is order of g13rd++.
    return count;
    

}
