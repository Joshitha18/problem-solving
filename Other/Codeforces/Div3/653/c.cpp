    #include <iostream>
    #include <algorithm>
    #include <vector>
    #include <iterator>
    #include <cmath>
    #include <climits>
    #include <unordered_map>
    using namespace std;
     
    int main() {
    int t,n,count=0,ans=0;
    cin>>t;
    while(t--){
    	count=ans=0;
    	cin>>n;
    	string a;
    	cin>>a;
    	
    	for(int i=0;i<n;i++){
    		if(a[i]=='(') 
    		{
    		if(i>0 and a[i-1]==')' and count<0) count=1;
    		else count+=1;
    		}
    		
    		else if(a[i]==')') count-=1;
    		
    		if(count<0) ans++;
    	}
    	cout<<ans<<endl;
    }
    return 0;
    }
