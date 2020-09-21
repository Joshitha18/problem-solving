#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cmath>
#include <climits>
#include <unordered_map>
using namespace std;


typedef long long ll;
typedef vector<int> vi;

#define pb push_back
#define pob(a) a.pop_back()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define all(a) a.begin(),a.end()

int main() {

int t;
cin>>t;
while(t--) {
 vi v;
 int n;
 cin>>n;

 rep(i,0,n) {
   int a;
   cin>>a;
   v.pb(a);
 }
int k=0;
 rep(i,0,n/2){
   int a= v[n-1];
   pob(v);
   v.insert(v.begin()+k,a);
   k+=2;
 }
 rep(i,0,n) {
   cout<<v[i]<<" ";
 }
 cout<<endl;
}


return 0;
}
