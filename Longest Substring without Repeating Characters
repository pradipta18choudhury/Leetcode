/******

Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

****/



int lengthOfLongestSubstring(string S) {
        
        if(S.length()==0)
            return 0;
        
       int ans=0;
       for(int i=0;i<S.length();i++)
       {
           unordered_map<char,int> mp;
           for(int j=i;j<S.length();j++)
           {
               if(mp.find(S[j])==mp.end())
                   mp[S[j]]=1;
               else break;
           }
           ans=max(ans,(int)mp.size());
       }
        
        return ans;
    }
