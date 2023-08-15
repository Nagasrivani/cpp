#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>org;
    for(int i=0;i<n;i++)
    {
        int temp=0;
        cin>>temp;
        org.push_back(temp);
    }
    sort(org.begin(),org.end());
    for(int i=0;i<org.size();i++)
    {
        cout<<org[i]<<" ";
    }
    vector<int>asc;
    for(int i=0;i<org.size();i++)
    {
        asc.push_back(org[i]);
    }
    cout<<endl;
    sort(org.begin(),org.end(),greater<int>());
    for(int i=0;i<org.size();i++)
    {
        cout<<org[i]<<" ";
    }
    vector<int>des;
    for(int i=0;i<org.size();i++)
    {
        asc.push_back(org[i]);
    }
    return 0;
}