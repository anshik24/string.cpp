int remAnagram(string str1, string str2)
{

map<char,int>mp;

for(int i=0;i<str1.size();i++){
    mp[str1[i]]++;
    
}
for(int i=0;i<str2.size();i++){
    mp[str2[i]]--;
}
int ans=0;
for(auto it: mp){
    if(it.second<0)
    ans+= -1*it.second;
    else
    ans+=it.second;
}
return ans;
}
