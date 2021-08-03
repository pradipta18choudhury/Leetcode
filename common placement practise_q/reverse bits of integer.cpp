#include<bits/stdc++.h>
using namespace std;
// program to reverse bits of an integer
// bitset we can use, to get bits for corrosponding number 
// bitset in included in #include<bitset> header

int revBits(int n)
{
    int pos=31;
    int ans=0;
    while(pos>=0 && n)// run the loop till all bits are processed
    {
        if(n&1)// if current bit is 10
        {
            ans=ans|(1<<pos);
        }
        n>>=1;//drop current bit
        pos--; // decrement pos
    }
    return ans;
}

int reverse(int n)
{
    int ans=0;
    while(n>0)
    {
        int r=n%10;
        ans=ans*10+r;
        n/=10;
    }
    return ans;
}


int main()
{
    int n;
    cin>>n;
    cout<<"before reverse "<<endl;
    cout<<(n)<<endl;
    cout<<"before reverse in bits: "<<bitset<4>(n)<<endl;
    
    cout<<"After reverse "<<endl;
    cout<<(reverse(n))<<endl;
    cout<<"after reverse in bits: "<<bitset<4>(reverse(n))<<endl;
}
