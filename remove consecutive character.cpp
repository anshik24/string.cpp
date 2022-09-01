class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        string ans;
        for(int i=0;i<S.size();i++){
            if(S[i]==S[i-1]){
            continue;
        }
        ans.push_back(S[i]);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends
