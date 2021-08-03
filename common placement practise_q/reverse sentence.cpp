#include<bits/stdc++.h>
using namespace std;
// program to reverse a sentence

void reverseSentence(string s)
{
    vector<string> v;
    string str="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            v.push_back(str);
            str="";
        }
        else
        str+=s[i];
    }
    v.push_back(str);
    int i;
    for(i=v.size()-1;i>0;i--)
    {
        cout<<v[i]<<" ";
    }
    cout<<v[0];
}

int main()
{
    string str;
    getline(cin,str);
    cout<<"Before reversing: "<<str<<endl;
    cout<<"After reverse the sentence: "<<endl;
    reverseSentence(str);
   // cout<<str<<endl;
}
