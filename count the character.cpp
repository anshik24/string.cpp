class Solution
{
  public:
        int getCount (string S, int N)
        {
            unordered_map<char,int>m;
            char ch=' ';
            for(int i=0;i<S.size();i++){
                if(ch==S[i]){
                    continue;
                }
                m[S[i]]++;
                ch=S[i];
            }
            int count=0;
            for(auto it:m){
                if(it.second==N){
                    count++;
                }
            }
           return  count;
            
        }
};
