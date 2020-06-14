#include <iostream>
using namespace std;

int main() {

long long t,n,x,m,l,r,left,right;
cin>>t;

while(t--){cin>>n>>x>>m;
left=right=x;
while(m--){cin>>l>>r;

if(l<=left && r>=right){left=l;right=r;}
if(r>=left && l<=left){left=l;}
if(r>=right && right>=l){right=r;}
}
cout<<(right-left+1)<<endl;
}
return 0;
}
