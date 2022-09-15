class Solution
{
    public:
        string modify (string s)
        {
            string str="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            str+=s[i];
            }
        }
        int j=str.size()-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                s[i]=str[j--];
        }
        }
        return s;
        }
};
