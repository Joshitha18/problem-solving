#include <iostream>
#include <vector>

using namespace std;

int main(){
int n;
cin>>n;
vector <vector<int>> v(n);

for(int i=1;i<n;i++){
  int a,b;
  cin>>a>>b;

   v[a-1].push_back(i);
   v[b-1].push_back(i);
}

vector <int> label (n,-1);
int next=0;

for(int i=0;i<n;i++){
  if(v[i].size()>2){
    label[v[i][0]]=0;
    label[v[i][1]]=1;
    label[v[i][2]]=2;
    next=3;
    break;
  }
}

for(int i=1;i<n;i++){
  if (label[i]==-1) {
    label[i] =next;
    next++;
  }
 cout<<label[i]<<endl;
}



  return 0;
}
