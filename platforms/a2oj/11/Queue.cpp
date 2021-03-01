#include <iostream>
#include <string>

using namespace std;

int main(){
  int n,j;
  cin>>n>>j;
  string str;
  cin>>str;
  for (int i=1;i<=j;i++){
    for(int k=0;k<(n-1);k++){
       if (str[k] == 'B' and str[k+1]== 'G'){str[k]='G'; str[k+1]='B';k++;}
    }
  }
  cout<<str<<endl;
  return 0;
}
