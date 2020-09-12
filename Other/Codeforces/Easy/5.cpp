#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cmath>
#include <climits>
#include <string>
#include <unordered_map>
using namespace std;

int main() {

string data;
cin>>data;

for_each(data.begin(), data.end(), [](char & c) {
        c = ::tolower(c);
    });

    for(int i = 0; i<data.length(); i++) {
      if(data.at(i) != 'a' && data.at(i) != 'e' && data.at(i) != 'i' && data.at(i) != 'o' && data.at(i) != 'u' && data.at(i) != 'y'){
        cout<<"."<<data.at(i);
      }
    }

cout<<endl;

return 0;
}
//https://codeforces.com/problemset/problem/118/A
