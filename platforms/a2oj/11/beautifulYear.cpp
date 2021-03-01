#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;
    while(1){
     year++;
     string s = to_string(year);
     set<int> digits(s.begin(), s.end());
     if(s.size() == digits.size()) { break; }
    }
    cout << year << endl;
    return 0;
}
