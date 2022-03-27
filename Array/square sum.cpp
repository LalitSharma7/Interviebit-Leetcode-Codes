class Solution {
public:
    bool judgeSquareSum(int c) {
       if(c==0 || c==1) {
            return true;
        }
        long long int l=0, r=sqrt(c), m=0;
        while(l<=r) {
            if(l*l + r*r == c) {
                return true;
            } else if(l*l + r*r < c) {
                l++;
            } else {
                r--;
            }
        }
        return false;

        
    }
};
