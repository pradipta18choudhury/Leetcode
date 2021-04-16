class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        char x;
        
        if(n%2!=0)//odd length
            return false;
        stack<char> st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                st.push(s[i]);
                continue;
            }
            if(st.empty())
                return false;
            switch(s[i])
            {
                case ')':
                    x=st.top();
                    st.pop();
                    if(x=='{' || x=='[')
                        return false;
                    break;
                case ']':
                    x=st.top();
                    st.pop();
                    if(x=='(' || x=='{')
                        return false;
                    break;
                case '}':
                    x=st.top();
                    st.pop();
                    if(x=='(' || x=='[')
                        return false;
                    break;
            }
        }
        return st.empty();
    }
};

/********
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
Example 4:

Input: s = "([)]"
Output: false
Example 5:

Input: s = "{[]}"
Output: true
 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
********/
