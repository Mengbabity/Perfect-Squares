class Solution {
public:
    int numSquares(int n) {
        if(n<=0)
            return 0;
        static vector<int> tmp({0});
        
        
        while(tmp.size()<=n)
        {
            int j=tmp.size();
            int cmp=INT_MAX;
            for(int i=1;i*i<=j;i++)
            {
                cmp=min(cmp,tmp[j-i*i]+1);
            }
            tmp.push_back(cmp);
        }
        
        return tmp[n];
    }
};
