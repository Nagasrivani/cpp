#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=length-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
