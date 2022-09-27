class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int store=INT_MIN;
        string ans;
        for(auto it:mp){
            if(store<it.second){
                store=it.second;
                ans=it.first;
            }
            else if(store==it.second){
                ans=min(ans,it.first);
            }
        }
        vector<string>final;
        final.push_back(ans);
        final.push_back(to_string(store));
        return final;
    }
};
