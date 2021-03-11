#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
int n, m, b;
cin >> n >> m;
vector<int> a;
for (int i = 0; i < m; i++) {
  cin >> b;
  a.push_back(b);
}
sort(a.begin(), a.end());
int i=0,min=1000;
while(i+n<m){
  if (a[i+n]-a[i] <min){min=a[i+n]-a[i];}
}
  cout<<min<<endl;
return 0;
}
