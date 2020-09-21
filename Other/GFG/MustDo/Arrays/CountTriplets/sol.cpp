#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef unordered_map <int,int> uii;

#define pb push_back
#define REP(i, a, b) for(int i=a; i<b; i++)
#define all(a) a.begin(),a.end()

int main() {

int n,num=0,a;
vi v;
uii umap;
cin>>n;
REP(i, 0, n) {
  cin>>a;
  v.pb(a);
  umap[a]=1;
}

REP(i,0, n-1){
  REP(j,i+1,n){
    if(umap.find(v[i]+v[j]) != umap.end()) num++;
  }
}

cout<<num<<endl;

return 0;
}
