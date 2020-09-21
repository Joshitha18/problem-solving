#include <iostream>
#include <vector>

using namespace std;

int main() {

int t;
cin>>t;

while(t--) {
 int n,k,l;
 cin>>n>>k>>l;
 if(n>1 && k==1) cout<<"-1\n";
 else {
   if(k*l < n) cout<<"-1\n";
   else {
     int p=1;
     for(int i=0;i<n;i++){
       if(p<=k){
        cout<<p<<" ";
        p++;
       }
       else{
         p=1;
         cout<<p<<" ";
         p++;
       }
     }
   }
 }
 cout<<endl;
}

  return 0;
}
