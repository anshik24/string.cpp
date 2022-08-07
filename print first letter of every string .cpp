class Solution{
public:	
	
	string firstAlphabet(string S)
{
    string ans="";
    ans.push_back(S[0]);
       for(int i=0;i<S.size();i++){
           if(S[i-1]==' '){
               ans.push_back(S[i]);
           }
       }
       return ans;

	}
};
