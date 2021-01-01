string Solution::convertToTitle(int n) {
string str="";
while(n!=0)
{
    int a = n%26;
    if(a == 0)
    {
        n = n/26-1;
        str += 'Z';
    }
    else
    {
        n = n/26;
        str += a+64;
    }
}
reverse(str.begin(),str.end());
return str;

}
