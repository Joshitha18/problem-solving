#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cmath>
#include <climits>
#include <unordered_map>
using namespace std;

int main() {

long long int t,n,k,m,max;
cin>>t;
while(t--){max=-1;
	cin>>n>>k;
	unordered_map <long long int,long long int> vmap;
	unordered_map <long long int,long long int> umap;
	for(int i=0;i<n;i++){
		cin>>m;
		m = m % k;
		if(m != 0) 
		{
			m = k-m;
			long long int key=m;
			if(umap.find(key)==umap.end()) umap[key]=0;
			vmap[m] = m+(k*umap[m]);
			umap[m]++;
			if(max<vmap[m]) max=vmap[m];
		}
	}
	cout<<max+1<<endl;

}

return 0;
}
