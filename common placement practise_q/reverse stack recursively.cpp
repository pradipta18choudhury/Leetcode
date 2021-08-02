#include<bits/stdc++.h>
using namespace std;
stack<char> st;

char helper(char a)
{
    if(st.size()==0)
    st.push(a);
    else{
        char t=st.top();
        st.pop();
        helper(a);
        st.push(t);
    }
}

char reverse()
{
    if(st.size()>0)
    {
        char t=st.top();
        st.pop();
        reverse();
      // call recursively untill we reach end of atack
        helper(t);
    }
}

int main()
{
   // reverse elements of a stack recursively, without loops
   string a;
   cout<<"before reverse: "<<endl;
   st.push('1');
   st.push('2');
   st.push('3');
   st.push('4');
   st.push('5');
   
   cout<<1<<" ";
   cout<<2<<" ";
   cout<<3<<" ";
   cout<<4<<" ";
   cout<<5<<endl;
   
   cout<<"After reverse :"<<endl;
   reverse();
   while(!st.empty())
   {
       char x=st.top();
       st.pop();
       a+=x;
   }
   cout<<a[4]<<" "<<a[3]<<" "<<a[2]<<" "<<a[1]<<" "<<a[0]<<endl;
}
