int Solution::braces(string str) {
    
    stack<char>s;
    
    for(auto c:str)
    {
        if(c==')')
        {
            int count =0;
            while(!s.empty() and s.top()!='(') 
            {
                s.pop(); //single wale k lie count use hoga
                count++;
            }
            if(count<=1)
               return 1;
               
            s.pop();  //last opening braces
        }
        else
        {
            s.push(c)
        }
    }
}
