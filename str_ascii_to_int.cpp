#include <bits/stdc++.h>
using namespace std;
int main() 
{
	
	
	    string S;
	    cin >> S;
	    int A[S.length()];
	    
	    for(int i = 0; i < S.length(); i++)
	    {
            //Converts a character into its ASCII value
	        A[i] = int(S[i]);
	    }
	    for(int i = 0; i < S.length(); i++)
	    {
	        cout << A[i] << " ";
	    }
	    cout << endl;    
	
    return 0;

}