#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int m,n,b;
    cin>>m>>n;

    vector <int> a;
    vector <int> p(m+1,0);

    a.push_back(0);

    for(int i=1;i<=m;i++){
      cin>>b;
      a.push_back(b);
    }

    for(int i=1;i<=n;i++){
      cin>>b;
      p[b]=1;
    }

    while(true){
      bool swapping = false;

      for(int i=1;i<m;i++){
        if(a[i]>a[i+1] && p[i]){
          swapping=true;
          swap(a[i],a[i+1]);
        }
      }
      if(!swapping) break;
    }

    bool sorted=true;
    for(int i=1;i<m;i++){
      if(a[i]>a[i+1]) sorted=false;
    }

if(!sorted) cout<<"NO\n";
else cout<<"YES\n";

  }

  return 0;
}
