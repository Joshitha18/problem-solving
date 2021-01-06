#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cmath>
#include <climits>
#include <unordered_map>
using namespace std;


int main()
{
    int x11, x12, x13, x21, x22, x23, x31, x32, x33;
    cin >> x11 >> x12 >> x13 >> x21 >> x22 >> x23 >> x31 >> x32 >> x33;
    int sum = (x12 + x13 + x21 + x23 + x31 + x32) / 2;
    x11 = sum - x12 - x13;
    x22 = sum - x21 - x23;
    x33 = sum - x31 - x32;
    cout << x11 << " " << x12 << " " << x13 << endl;
    cout << x21 << " " << x22 << " " << x23 << endl;
    cout << x31 << " " << x32 << " " << x33 << endl;
    return 0;
}
//https://codeforces.com/problemset/problem/259/B
