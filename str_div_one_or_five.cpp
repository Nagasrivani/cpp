//Can the digits of A be rearranged such that the resulting number is divisible by 5? if divisible output yes or no
#include<bits/stdc++.h>
using namespace std;
int main() 
{
   string A;
   cin>>A;
   int flag=0;

  // If any '0' or '5' is found in the string A - then set flag as 1 and exit the loop
   for(int i=0; i<A.length();i++)
      {
        if(A[i]=='5' || A[i]=='0')
          {
            flag = 1;
            break;
          } 
      }
    if(flag == 1)
      {
        cout<<"Yes"<<endl;
      }
    else
      {
        cout<<"No"<<endl;
      }
 return 0;
}