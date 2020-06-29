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
	
	void bfs(T source) {
		
		map<T,bool> visited;
		queue <T> q;
		
		q.push(source);
		visited[source] = true;
		
		while(!q.empty()) {
			T node = q.front();
			q.pop();
			cout<<node<<" ";
			
			for(auto x:l[node]) {
				if(!visited[x]) q.push(x);
				visited[x] = true;
			}
		}
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
	
	g.bfs(0);
	cout<<endl;
	
	Graph <char> f;
	f.addEdge('a','b');
	f.addEdge('a','d');
	f.addEdge('b','c');
	f.addEdge('c','d');
	f.addEdge('d','e');
	f.addEdge('e','f');
	
	f.bfs('a');
	cout<<endl;

return 0;
}
