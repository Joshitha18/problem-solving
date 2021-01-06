#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cmath>
#include <climits>
#include <unordered_map>
using namespace std;

int main() {

long long int t,n,a;
cin>>t;
while(t--){
  cin>>n;
  vector <int> v;
  vector <int> pos;
  vector <int> stat;

  for(int i=0;i<n;i++){
    cin>>a;
    v.push_back(a);
  }

  for(int i=0;i<n;i++){
    cin>>a;
    stat.push_back(a);
  }

  for(int i=0;i<n;i++){
    if(stat[i]==0) pos.push_back(v[i]);
  }

  sort(pos.begin(), pos.end());

  for(int i=0;i<n;i++){
    if(stat[i]==0) {
      v[i]=pos[pos.size()-1];
      pos.pop_back();
    }
    cout<<v[i]<<" ";
  }
cout<<endl;
}

return 0;
}
