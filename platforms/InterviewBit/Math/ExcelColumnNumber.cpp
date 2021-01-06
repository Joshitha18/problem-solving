int Solution::titleToNumber(string A) {
    int ans=0;
    int size=A.size();
    for(int i=0;i<size;i++)
    {
        int t=A[i]-64;
        ans=ans*26+t;
        cout<<ans<<endl;
    }
    return ans;
}
