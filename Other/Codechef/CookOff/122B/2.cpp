#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

 int t;
 cin>>t;
 while(t--) {

 int n,k,p=0,end1=0,end2=0,val=0;
 cin>>n>>k;
 string s;
 cin>>s;
 vector <int> v;

 for(int i=0;i<n;i++){
   if(s[i]=='0') {p++;val++;}
   else {v.push_back(p);p=0;}
 }

 if(p !=0){v.push_back(p);p=0;}

if(val==n) cout<<"0\n";
else{
 if(s[0]=='0') {end1=v[0]; v.erase(v.begin());}
 if(v.size()>0){
 if(s[n-1]=='0') {end2=v[v.size()-1]; v.pop_back(); }
}

   if(k%2 ==0) {v.push_back(end1+end2);}
   else if (k%2 !=0){val = val- max(end1,end2);v.push_back(min(end1,end2));k=k-1;}

   sort(v.begin(),v.end());

  while(k>0 && v.size()>0){
    int m=v[v.size()-1];
    val = val-m;
    k=k-2;
    v.pop_back();
  }
  cout<<val<<endl;
}

}

  return 0;
}
