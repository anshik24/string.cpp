class Solution{
    public:
    string chartostr(char arr[] , int n)
    {
        //code here
        string res="";
        for(int i=0;i<n;i++){
            res+=arr[i];
        }
        return res;
    }
};
