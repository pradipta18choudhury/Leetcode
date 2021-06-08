/********
Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...
 

Example 1:

Input: columnNumber = 1
Output: "A"
Example 2:

Input: columnNumber = 28
Output: "AB"
Example 3:

Input: columnNumber = 701
Output: "ZY"
Example 4:

Input: columnNumber = 2147483647
Output: "FXSHRXW"
 

Constraints:

1 <= columnNumber <= 231 - 1
********/
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s="";
        while(columnNumber--)
        {
            s=char(columnNumber%26+65) + s;
            columnNumber/=26;
            //a ascii value 65
            //total 26 alphabets present 
        }
        return s;
    }
};
