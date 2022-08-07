class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    int n=S.size();
	    bool flag =true;
	 for(int i =0;i<n;i++){
	     if(S[i]!=S[n-i-1]){
	         flag=false;
	         break;
	     }
	     else{
	         flag=true;
	     }
	 }
	 if(flag==true)
	 return 1;
	 return 0;
	 
	 
	}

};
