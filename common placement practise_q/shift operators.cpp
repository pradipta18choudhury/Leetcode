#include<bits/stdc++.h>
using namespace std;

int main()
{
    // shift number n by m times
    int n,m;
    cin>>n>>m;
    cout<<"left shift ";
    cout<<n*pow(2,m)<<endl;
    
    cout<<"right shift ";
    cout<<n/pow(2,m)<<endl;
}
