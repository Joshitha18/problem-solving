#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Recursive function to return gcd of a and b
long long gcd(long long int a, long long int b)
{
if (b == 0)
	return a;
return gcd(b, a % b);
}


// Driver program to test above function
int main()
{
	int n;
  vector <int> num;
  cin>>n;
  for(int i=0;i<n;i++){
    int a;/* message */
    cin>>a;
    num.push_back(a);
  }
  for (int i=2;;i++){
    int count=0;
    for(int j=0;j<n;j++){
      if (gcd(num[j],i)>1) {count++;}
    }
    if (count==n){cout<<i<<endl;return 0;}
  }

	return 0;
}
