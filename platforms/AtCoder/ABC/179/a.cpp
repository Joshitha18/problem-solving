#include <iostream>
#include <string>

using namespace std;

int main(){

string s;
cin>>s;

if(s[s.size()-1]=='s')cout<<s<<"es\n";
else cout<<s<<"s\n";

  return 0;
}
