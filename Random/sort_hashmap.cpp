#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;


bool cmp1(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;//Ascending order for first
}
bool cmp2(pair<int, int>a, pair<int, int> b) {
    return a.second < b.second;//Ascending order for second
}
int main()
{
    map<int, int> hash;
    hash[1] = 4;
    hash[3] = 3;
    hash[2] = 5;
    hash[4] = 1;
    vector<pair<int, int>> vecs;
    for (auto it = hash.begin();it!= hash.end();it++) {
        vecs.push_back(make_pair(it->first, it->second));
   }
     //For first ascending order
    cout << "For first ascending order:" << endl;
    sort(vecs.begin(), vecs.end(),cmp1);
    for (auto it = vecs.begin(); it != vecs.end(); it++)
        cout << it->first << ':' << it->second << '\n';
    //For second ascending order
    cout << "For second ascending order:" << endl;
    sort(vecs.begin(), vecs.end(), cmp2);
    for (auto it = vecs.begin(); it != vecs.end(); it++)
        cout << it->first << ':' << it->second << '\n';
    return 0;
}