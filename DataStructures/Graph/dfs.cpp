#include <iostream>
#include <map>
#include <list>
#include <queue>
using namespace std;

template <typename T>
class Graph {

	map <T, list<T> > l;
	
public:
	void addEdge(T x,T y) {
		l[x].push_back(y);
		l[y].push_back(x);
	}
	
	void dfs_recursive(T source, map <T,bool>& visited) {
		for(auto x:l[source]) {
			if(!visited[x]) {
				visited[x] = true;
				cout<<x<<" ";
				dfs_recursive(x,visited);
			}
		}
	}
	
	void dfs(T source) {
		
		map<T,bool> visited;
		visited[source] = true;
		cout<<source<<" ";
		dfs_recursive(source,visited);
		
	}

};	
	


int main() {

	Graph <int> g;
	g.addEdge(0,1);
	g.addEdge(0,3);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(3,4);
	g.addEdge(4,5);
	g.addEdge(4,6);
	
	g.dfs(0);
	cout<<endl;
	
	Graph <char> f;
	f.addEdge('a','b');
	f.addEdge('a','d');
	f.addEdge('b','c');
	f.addEdge('c','d');
	f.addEdge('d','e');
	f.addEdge('e','f');
	f.addEdge('e','g');
	
	f.dfs('a');
	cout<<endl;

return 0;
}
