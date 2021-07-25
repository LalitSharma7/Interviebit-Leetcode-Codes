int Solution::trailingZeroes(int A) {
    
    if(A<0)
       return -1;
       
    int count = 0;
    
    for(int i=5;i<=A;i=i*5)
    {
        count = count+ A/i;
    }
    
    return count;
}
