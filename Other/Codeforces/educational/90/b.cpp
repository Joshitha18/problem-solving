#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cmath>
#include <unordered_map>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){
string str;
cin>>str;

int count0 = 0, count1 = 0; 
int n = str.length();

for (int i = 0; i < n; i++) { 
        if (str[i] == '0') { 
            count0++; 
        } 
        else { 
            count1++; 
        } 
}

int m=min(count0,count1);

if(m%2==0) cout<<"NET\n";
else cout<<"DA\n";

}


return 0;
}
