#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cmath>
#include <climits>
#include <cstdlib>
#include <unordered_map>
using namespace std;

int main() {

int n;
cin>>n;

vector<int> x;
vector<int> y;
int a,b;

for(int i=0; i<n;i++){
  cin>>a>>b;
  x.push_back(a+b);
  y.push_back(a-b);
}

a = *max_element(x.begin(),x.end()) - *min_element(x.begin(),x.end());
b = *max_element(y.begin(),y.end()) - *min_element(y.begin(),y.end());

cout<<max(a,b)<<endl;

return 0;
}
