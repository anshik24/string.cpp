class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
        int sum=0;
        int ans;
    for(int i=0;i<str.size();i++){
        if(str[i]>='0' && str[i]<=9)
        int j=i;
        ans=0;
        while(str[i]>='0'&& str[i]<='9'&& i<str.size()){
            ans=ans*10+(str[i]-'0');
            i++;
        }
        sum+=ans;
        
    }	
    	return sum;
    	
    }
};
