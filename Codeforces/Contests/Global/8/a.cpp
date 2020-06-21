    #include <iostream>
    #include <cmath>
    using namespace std;
     
    int main() {
     
    long long int t,a,b,c,i;
    cin>>t;
    while(t--){
    	cin>>a>>b>>c;
    	long long int sum[100];
    	
    	if(a>b){swap(a,b);}
    	sum[0]=a;sum[1]=b;
    	
    	i=1;		
    		while(sum[i]<=c){i++;
    		sum[i]=sum[i-1]+sum[i-2];}
    	
    	
    	cout<<i-1<<endl;}
     
    return 0;
    }		
