vector<vector<int> > v(A, vector<int>(A,0));
    int x=1,i=0,j=0;
    v[0][0]=1;
    while(x<A*A)
    {
        while(j+1<A && v[i][j+1]==0) //right
        {
            j++;x++;
            v[i][j]=x;
        }
        while(i+1<A && v[i+1][j]==0) //down
        {
            i++;x++;
            v[i][j]=x;
        }
        while(j-1>=0 && v[i][j-1]==0) //left
        {
            j--;x++;
            v[i][j]=x;
        }
        while(i-1>=0 && v[i-1][j]==0) //up
        {
            i--;x++;
            v[i][j]=x;
        }
    }
    return v;
