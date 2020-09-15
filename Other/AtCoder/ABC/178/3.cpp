#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cmath>
#include <climits>
#include <unordered_map>
using namespace std;

int main() {

int n;
cin>>n;


  const unsigned int M = 1000000007;

      unsigned long long f = 1;
      unsigned long long nine = 1;
      unsigned long long eight = 1;

if(n==2) {f = 2;}
else if(n==1){f = 0;}
else {
      for (int i = 1; i <= n; i++){
          f = (f*10) % M;
          nine = (nine*9) % M;
          eight = (eight*8) % M;
      }

      f = (f + M - ((nine + nine) % M) + eight) % M;
 }
      cout<<f<<endl;

return 0;
}
