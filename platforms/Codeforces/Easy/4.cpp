#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cmath>
#include <climits>
#include <unordered_map>
using namespace std;

int main() {

long long int m,n,a,l,b;
cin>>m>>n>>a;

if(m%a != 0) l=m/a+1;
 else l=m/a;
if(n%a != 0) b=n/a+1;
 else b=n/a;
cout<<l*b<<endl;


return 0;
}
//https://codeforces.com/problemset/problem/1/A
