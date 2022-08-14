class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        if(str1.length()!=str2.length())return 0;
        unordered_map<char,int>mp;
        unordered_map<char,int>mp1;
        for(int i=0;i<str1.length();i++){
            mp[str1[i]]++;
            mp1[str2[i]]++;
            
        }
        for(int i=0;i<str1.length();i++){
            if(mp[str1[i]]!=mp1[str2[i]]){
                return false;
            }
            else{
            mp[str1[i]]--;
            mp1[str2[i]]--;
            }
        }
        
        return true;
    }
};
