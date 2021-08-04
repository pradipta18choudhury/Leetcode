/*********

Problem Statement
You are given a dictionary of words and a large input string. 
You have to find out whether the input string can be completely 
segmented into the words of a given dictionary. The following two examples elaborate on the problem further.

*******/

#include<bits/stdc++.h>
using namespace std;

bool breaker(string str,unordered_set<string> &m)
{
    for(int i=0;i<str.length();i++)
    {
        string f=str.substr(0,i);
        if(m.find(f)!=m.end())
        {
            string s=str.substr(i);
            if(s.empty() || m.find(s)!=m.end() || breaker(s,m))
            return true;
        }
    }
    return false;
}


int main()
{
    unordered_set<string> m={"apple","pie","beer","hello","tunu"};
    string s="applepie";
    if(breaker(s,m))
    cout<<"segement can be formed"<<endl;
    else
    cout<<"sorry!! not possible"<<endl;
    return 0;
}
