#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define pb push_back
#define REP(i, a, b) for(int i=a; i<b; i++)
#define all(a) a.begin(),a.end()

int main() {

  int t;
  cin>>t;
  while(t--) {
    int n,s,start=0,cur=0,cum=0;
    cin>>n>>s;
    vi v;
    REP(i,0,n){
      int a;
      cin>>a;
      v.pb(a);
    }

    cum=v[0];

    while(1) {
      if(cum==s) break;
      else if(cum>s && start<cur)
      {
        cum -= v[start];
        start++;
      }
      else {
        if(cur<n) {
          cur++;
          cum += v[cur];
        }
        else break;
      }
    }
  
if(cum==s) cout<<start+1<<" "<<cur+1<<endl;
else cout<<"-1\n";
}

  return 0;
}
