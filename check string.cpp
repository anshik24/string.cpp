// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
        bool check (string s)
        {
        	//code here.
        	char ans= s[0];
        	for(int i=0;i<s.size();i++){
        	    if(s[i]!=ans){
        	    return 0;
        	    }
        	}
        	return 1;
        
        }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
		string s;
		cin >> s;
		Solution ob;
		if (ob.check (s))
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
