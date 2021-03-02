#include <iostream>
#include <vector>

using namespace std;

int main() {
  int size =5;
  vector <vector <int>> vec(size, vector <int> (size, 0));
  for (int i=1; i<4;i++){
    for (int j=1;j<4;j++){
      cin>>vec[i][j];
    }
  }

  for (int i=1; i<4;i++){
    for (int j=1;j<4;j++){
      if ((vec[i-1][j]+vec[i+1][j]+vec[i][j-1]+vec[i][j+1]+vec[i][j])%2 == 1) cout<<"0";
      else cout<<"1";
    }
    cout<<endl;
  }
  return 0;
}
