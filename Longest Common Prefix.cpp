class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string ans="";
        
        if(n==0)
            return ans;
        if(n==1)
            return strs[0];
        sort(strs.begin(),strs.end());
        int end=min(strs[0].size(),strs[n-1].size());
        string first=strs[0];
        string last=strs[n-1];
        int i=0;
        
        while(i<end && first[i]==last[i])
            i++;
        ans=first.substr(0,i);
        return ans;
    }
};

/******
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

0 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lower-case English letters.
********/
