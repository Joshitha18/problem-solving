// https://www.geeksforgeeks.org/number-ordered-points-pair-satisfying-line-equation/
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cmath>
#include <climits>
#include <cstdlib>
#include <unordered_map>
using namespace std;


int main(){
vector <int> x;
int n,m,c,a;
long long int val=0;
cin>>n>>m>>c;
unordered_map <int,int> freq;
for(int i=0;i<n;i++){
    cin>>a;
    x.push_back(a);
}

for(int i=0;i<n;i++){
    freq[x[i]]++;
}

for(int i=0;i<n;i++){
    if( freq.find( m*x[i]+c ) != freq.end()) {
    val += freq[m*x[i]+c];
    }
    if(x[i]==m*x[i]+c) val--;
}
cout<<val<<endl;
    return 0;

}
