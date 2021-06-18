/**********
Given two binary strings a and b, return their sum as a binary string.
Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
 

Constraints:

1 <= a.length, b.length <= 104
a and b consist only of '0' or '1' characters.
Each string does not contain leading zeros except for the zero itself.
**********/

class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int i=a.length()-1;
        int j=b.length()-1;
        int s=0;
        
        while(i>=0 || j>=0 || s==1)
        {
            s+=((i>=0)?a[i]-'0':0);
            s+=((j>=0)?b[j]-'0':0);
            
            ans=char(s%2+'0')+ans;
            s/=2;
            i--;j--;
        }
        return ans;
    }
};
