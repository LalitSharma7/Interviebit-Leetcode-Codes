int Solution::sqrt(int A) {
    int start = 1, end = A;
    while (start <= end){
       int mid = start + (end - start)/2;
       if (mid == A/mid){
         return mid;
       }
       else if (mid < A/mid){
          start = mid+1;
       }
      else{
        end = mid-1;
      }
    }
return end;
}
