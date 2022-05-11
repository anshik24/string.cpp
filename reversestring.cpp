class Solution {
  public:
    string revStr(string S) {
        // code here
        if(S.length()==0){
            return S;
        }
        
        string res=S.substr(1);
        revStr(res);
        cout<<S[0];
        
    }
};
