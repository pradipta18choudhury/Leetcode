/*******

Given a string s, return the longest palindromic substring in s.

 

Example 1:

Input: s = "babad"
Output: "bab"
Note: "aba" is also a valid answer.
Example 2:

Input: s = "cbbd"
Output: "bb"
Example 3:

Input: s = "a"
Output: "a"
Example 4:

Input: s = "ac"
Output: "a"
 

Constraints:

1 <= s.length <= 1000
s consist of only digits and English letters (lower-case and/or upper-case)

*******/

string longestPalindrome(string s) {
        int maxLength=1, start=0;
        //vector <vector<bool>> dp(s.size(), vector <bool> (s.size(), 0));
        
       bool dp[s.size()][s.size()];
       memset(dp,0,sizeof(dp));
       
        for (int i=0; i<s.size()-1; i++) dp[i][i]=1;
        for (int i=s.size()-1; i>=0; i--) {
            for (int j=i+1; j<s.size(); j++) {
                if (s[i]==s[j]) {
                    if (j-i==1 || dp[i+1][j-1]) dp[i][j]=true;
                }
           
                if (dp[i][j]==1 && maxLength < j-i+1) {
                    maxLength=j-i+1;
                    start=i;
                }
            }
        }
        string res;
        for (int i=start; i<maxLength+start; i++)
            res+=s[i];
        return res;
    }
