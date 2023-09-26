// largest element in the array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,large=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    cout<<"The largest element in the array is:"<<large;
    return 0;
}