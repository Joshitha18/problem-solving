#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <iterator>
#include <cmath>
#include <climits>
#include <unordered_map>
#include <iomanip>
using namespace std;

int main() {

int n;
vector <int> v;
cin>>n;
for(int i=0;i<n;i++){
  int r;
  cin>>r;
  v.push_back(r);
}

    sort(v.begin(), v.end(), greater<int>());

long long int  area=0;
for (int i=0;i<v.size();i++){
  if(i%2==0) area += v[i]*v[i];
  else area -= v[i]*v[i];
}
   double x = 3.1415926536;

   cout << fixed;
   cout << setprecision(10);
   cout <<M_PI*area<<endl;

return 0;
}
//https://codeforces.com/problemset/problem/157/B
