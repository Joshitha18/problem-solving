#include <iostream>
#include <vector>

using namespace std;


vector <int> x;
vector <int> y;
vector <int> visit;

void dfs(int i){
  visit[i]=1;
  for(int j=0;j<x.size();j++){
    if(visit[j]==0 && (x[i]==x[j] || y[i]==y[j])){
      dfs(j);
    }
  }
}


int main() {

int n,a,b,count=0;
cin>>n;


for(int i=0;i<n;i++){
  cin>>a>>b;
  x.push_back(a);
  y.push_back(b);
  visit.push_back(0);
}

for(int i=0;i<n;i++){
  if(visit[i]==0){
    dfs(i);
    count++;
  }
}
cout<<count-1<<endl;

return 0;
}
