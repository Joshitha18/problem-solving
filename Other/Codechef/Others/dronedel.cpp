#include <iostream> 
#include <string>
#include <cstring>
using namespace std; 
  
 
int main() 
{  
    long long int num,t,len,i; 
    char name[100000];
  cin >> t;
  while(t--){
  
  cin >> name;
  len=strlen(name);
  
   long long array[len];
  for(i=0;i<len;i++){
  
    if(name[i]=='a' ||name[i]=='e' || name[i]== 'i' || name[i]=='o' || name[i]=='u'){array[i]=0;}
    else {array[i]=1;}
  	}
  	

  	
  long long decimal = 0,m=1000000007;    

for(i = 0 ; i < len; i++)
     decimal = ((decimal*2)%m + array[i]%m)%m;
     

  
    cout << decimal << endl; 
    
    }
    
    return 0;
} 


