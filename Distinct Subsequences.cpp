class Solution {
public:
    int numDistinct(string s, string t) {
         int n=s.length(),m=t.length();
        vector<vector<unsigned long long>>dp(m+1,vector<unsigned long long>(n+1,0));
        
        for( int i=0;i<n+1;i++)
        {
            dp[0][i]=1;
        }
        
        
        
        for( int i=1;i<m+1;i++)
        {
            for(int j=i;j<n+1;j++)
            {
                if(t[i-1]==s[j-1])
                {
                    dp[i][j]=dp[i][j-1]+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=dp[i][j-1];
                }
            }
        }
       
        return(dp[m][n]);
    }
};

