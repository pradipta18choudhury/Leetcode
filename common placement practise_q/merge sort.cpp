#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int start,int mid,int end, int temp[])
{
    int i=start;
    int j=mid;
    int k=start;
    while(i<=mid-1 && j<=end)
    {
        if(arr[i]<=arr[j])
        {
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
        }
    }
    while(i<=mid-1)
    temp[k++]=arr[i++];
    while(j<=end)
    temp[k++]=arr[j++];
    
    for(int i=start;i<=end;i++)
    arr[i]=temp[i];
    return;
    
}

void mergesort(int arr[],int start,int end,int temp[])
{
    if(start>=end)
    return;
    else{
        int mid=(start+end)/2;
        mergesort(arr,start,mid,temp);
        mergesort(arr,mid+1,end,temp);
        merge(arr,start,mid+1,end,temp);
    }
}

void _mergesort(int arr[],int n)
{
    int temp[n];
    mergesort(arr,0,n-1,temp);
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"before sort: "<<endl;
    print(arr,n);
    _mergesort(arr,n);
    cout<<"after sort: "<<endl;
    print(arr,n);
    return 0;
    
}
