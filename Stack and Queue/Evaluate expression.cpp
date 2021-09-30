int Solution::evalRPN(vector<string> &A) {
    int n=A.size();
    stack<int> stk;
    for(int i=0;i<n;i++)
    {
        if(A[i]=="+")
        {
            int y=stk.top();
            stk.pop();
            int x=stk.top();
            stk.pop();
            stk.push(x+y);
        }
        else if(A[i]=="-")
        {
            int y=stk.top(); stk.pop();
            int x=stk.top(); stk.pop();
            stk.push(x-y);
        }
        else if(A[i]=="*")
        {
            int y=stk.top(); stk.pop();
            int x=stk.top(); stk.pop();
            stk.push(x*y);
        }
        else if(A[i]=="/")
        {
            int y=stk.top(); stk.pop();
            int x=stk.top(); stk.pop();
            stk.push(x/y);
        }
        else
        {
            stk.push(stoi(A[i]));
        }
    }
    return stk.top();

    
}
