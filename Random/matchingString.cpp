#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {

ifstream fin( "db.txt" );
string line;
int line_num=0;
while( getline( fin, line ) ) {
    line_num++;
    if( line.find( "iotiot" ) != string::npos ) // if found in line then
        cout << "Found" <<" "<< line <<"in line number "<< line_num<<endl; // do something
}

return 0;
}
