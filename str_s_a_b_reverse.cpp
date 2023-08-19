//1st line of op print the same string S in A, 2nd line print reverse of string S in B
#include<bits/stdc++.h>
using namespace std;
int main() 
{
   string S,A,B;
   cin>>S;
   for(int i=0;i<S.length();i++)
   {
       A=A+S[i];
   }
   for(int i=S.length()-1;i>=0;i--)
   {
       B=B+S[i];
   }
   for(int i=0;i<S.length();i++)
   {
       cout<<A[i];
   }
   cout<<endl;
   for(int i=0;i<S.length();i++)
       {
         cout<<B[i];
       }
   cout<<endl;
 return 0;
}