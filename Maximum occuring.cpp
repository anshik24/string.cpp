class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        
        map<char,int>m;
        for(int i=0;i<str.length();i++){
            m[str[i]]++;
        }
        int max=0;
        char ch=0;
        for(auto i:m){
            if(i.second>max){
               max=i.second;
               ch=i.first;
            }
        }
        return ch;
    }

};
