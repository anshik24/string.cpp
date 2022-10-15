class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    {
        string res="",temp="";
        for(int i=0;i<S.length();i++){
            if(S[i]=='.')
            {
                res=S[i]+temp+res;
                temp="";
                }
                else{
                    temp+=S[i];
                }
        }
                res=temp+res;
                return res;
        }
};
