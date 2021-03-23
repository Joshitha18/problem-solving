#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string longestPalindrome(string s)
{
   int N = s.size();
   int dp[N][N];
   memset(dp,0,sizeof(dp));

   int jump = N-1;
   int len=1;
   int start=0;

   for(int i=0;i<N-1;i++)
   {
       dp[i][i] = 1;
       if(s[i]==s[i+1])
       {  dp[i][i+1]=1; start=i; len=2;  }
   }
   dp[N-1][N-1]=1;

   for(int j=2;j<=jump;j++)
   {
       for(int i=0;i< N-j;i++)
       {
           int st=i; //start point
           int ed = i+j;  //ending point

           if(dp[st+1][ed-1]==1 && s[st]==s[ed])
           {
               dp[st][ed]=1; start=i; len=j+1;
           }
       }
   }
  return s.substr(start, len);
}


int main(){
  string str;
  cin>>str;
  cout<<longestPalindrome(str)<<endl;
  return 0;
}
