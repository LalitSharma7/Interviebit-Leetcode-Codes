public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        vector<int>v;
        int max = 0;
        int len;
        int count;
        for(int i=0;i<n;i++)
        {
            string s = sentences[i];
            len = s.length();
            count = 0;
            for(int i=0;i<len;i++)
            {
             if (s[i] == ' ')
               {
                 count++;
		       }
          }
             v.push_back(count+1);
        }
        int k = v.size();
        for(int i=0;i<k;i++)
        {
            if(v[i]>max)
            {
                max = v[i];
            }
        }
        return max;
    }
};
