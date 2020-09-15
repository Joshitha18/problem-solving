   #include <iostream>
   #include <algorithm>
   #include <vector>
   #include <iterator>
   #include <cmath>
   #include <climits>
   #include <unordered_map>
   using namespace std;

   int main() {

   long long int a,b,c,d;
   cin>>a>>b>>c>>d;

   long long int val=b*d;
   if (b*c > val) val = b*c;
   if (a*c > val) val = a*c;
   if (a*d > val) val = a*d;

   cout<< val<<endl;

   return 0;
   }
