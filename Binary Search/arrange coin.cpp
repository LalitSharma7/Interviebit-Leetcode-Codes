class Solution {
public:
    int arrangeCoins(int n) {
         long low = 0, hi = n, mid, tmp;
        while (low <= hi) {
            mid = low + (hi - low) / 2;
            tmp = mid * (mid + 1) / 2;
            
            if (tmp == n) return mid;
            
            if (tmp <= n) low = mid + 1;
            else hi = mid - 1;
        }
        return low-1;
        
        //right approach but wrong executin
    }
};
