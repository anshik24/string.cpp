class Solution{
    public:
	string printMinIndexChar(string S, string patt)
	{
	   unordered_map<char,int>m;
	   string str="$";
	   for(int i=0;i<patt.size();i++){
	       m[patt[i]]++;
	   }
	   for(int i=0;i<S.size();i++){
	       if(m[S[i]]){
	           str=S[i];
	           break;
	       }
	   }
	   return str;
	    
	}
};
