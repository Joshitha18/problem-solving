#include <iostream>
#include <string>

using namespace std;

int main(){
  string str,str_new;
  cin>>str;
  int n= str.length();
  for (int i=0; i<n; i++){
       if ( i+1 < n && str[i] == '-' && str[i+1]== '.') {str_new.append("1");i++;}
       else if ( i+1 < n && str[i] == '-' && str[i+1]== '-') {str_new.append("2");i++;}
       else {str_new.append("0");}
  }
  cout<<str_new<<endl;
  return 0;
}
