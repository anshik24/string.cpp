
string firstRepChar(string s)
{
    //code here.
    string str;
    unordered_map<char,int> m;
    for(int i=0;i<s.length();i++){
      m[s[i]]++;
        if(m[s[i]]>1){
        str=s[i];
        return str;
    }
}
return "-1";
}
