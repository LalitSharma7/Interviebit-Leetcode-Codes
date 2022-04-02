class Solution {
public:
     bool checkPalindrome(string s, int i, int j)
    {
        while(i<j)
        {
            if(s[i] != s[j]) //we can also use s.at(i) != s.at(j)
                return false;
            
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
         int start=0, end=s.size()-1;
        
        while(start<end) 
        {
            if(s[start] != s[end]) 
            {
				//check for next left of end pointer and next right of start pointer
                return (checkPalindrome(s, start, end-1) || checkPalindrome(s, start+1, end));
            }
            start++;
            end--;
        }
        return true;
        
    }
};
