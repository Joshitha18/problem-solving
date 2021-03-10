#include <iostream>
#include <string>
using namespace std;

int main(){
  int m,s;
  cin>>m>>s;
  if(s==0){
    if(m==1){
      cout<<"0 0"<<endl;
      return 0;
    }
    else{
      cout<<"-1 -1"<<endl;
      return 0;
    }
    }
  else {
    string mini;
    string maxi;
    for(int i=0;i<m;i++){
      maxi.push_back('0'+min(9,s));
      s-=min(9,s);
    }
    if(s>0){
      cout<<"-1 -1"<<endl;
      return 0;
    }
    for (int i=m-1;i>=0;i--){
      mini.push_back(maxi[i]);
    }
    int j=0;
    while(mini[j]=='0') j++;
    mini[0]++;
    mini[j]--;
    cout<<mini<<" "<<maxi<<endl;
  }

  return 0;
}
