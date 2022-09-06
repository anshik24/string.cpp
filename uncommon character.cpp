class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
        set<char>s1( A.begin(),A.end());
        set<char>s2 (B.begin(),B.end());
        unordered_map<char,int>m;
        string str="";
        for(auto i:s1){
            m[i]++;
        }
        for(auto i:s2){
            m[i]++;
        }
        for(auto i: m){
            if(i.second==1){
                str+=i.first;
            }
        }
        sort(str.begin(),str.end());
        if(str==""){
            return "-1";
            
        }
        else return str;
        }
};
