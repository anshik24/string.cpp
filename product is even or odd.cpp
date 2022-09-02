
int EvenOdd(string n1 , string n2)
{
    char c1=n1[n1.length()-1];
    char c2=n2[n2.length()-1];
    //typecast the char to integer
    int ans=((int)c1)*((int)c2);

if(ans%2==0)
return 1;
else return 0;
}
