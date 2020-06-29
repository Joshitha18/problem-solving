#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;


class Graph {
	//adj list
	unordered_map <string, list<pair<string,int> > > l;
	
public:
	void addEdge(string x,string y,bool bidirectional_edge,int weight){
		l[x].push_back(make_pair(y,weight));
		
		if(bidirectional_edge) l[y].push_back(make_pair(x,weight));
	}

	void printAdjList() {
		for(auto x:l) {
			string key = x.first;
			list<pair<string,int> > neighbours = x.second;
			
			cout<<key<<" -> ";
			
			for(auto y:neighbours) {
				cout<<"("<<y.first<<", "<<y.second<<")  ";
			} 
			
			cout<<endl;
		}
	}

};


int main () {

	Graph g;
	g.addEdge("A","B",true,20);
	g.addEdge("D","B",true,40);
	g.addEdge("A","C",true,10);
	g.addEdge("A","D",false,50);
	g.addEdge("C","D",true,40);
	g.printAdjList();

return 0;
}
