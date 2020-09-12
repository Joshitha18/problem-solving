#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cmath>
#include <climits>
#include <unordered_map>
using namespace std;

int main() {
int m,n;
cin>>n>>m;
int sum=0,count=0;
vector <int> v;

for(int i=0;i<n;i++){
  int a;
  cin>>a;
  v.push_back(a);
}
    sort(v.begin(), v.end());


    for (int i = 0; i < v.size(); i++) {
      if(count<m && v[i]<0) {sum -= v[i];count++;}
    }

cout<<sum<<endl;



return 0;
}
//https://codeforces.com/problemset/problem/34/B
