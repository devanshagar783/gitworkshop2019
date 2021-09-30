#include<iostream>
#include<list>
#include<vector>
#include<queue>
#include<utility>
using namespace std;

typedef pair<int,int> mpair;
class Graph{ 
	int v;
    list< mpair > *adj; 

public: 
	Graph(int V);
    void addEdge(int u, int v, int w); 
    void shortestPath(int s); 
}; 

Graph::Graph(int V){ 
	this->v = V; 
	adj = new list<mpair>[V]; 
} 

void Graph::addEdge(int u, int v, int weight){ 
	adj[u].push_back(make_pair(v, weight)); 
	adj[v].push_back(make_pair(u, weight)); 
} 

// dijkstra's algorithm
void Graph::shortestPath(int s){
    priority_queue<mpair,vector<mpair>,greater<mpair>> p;
    vector<int> dist(v,INT16_MAX);
    p.push(make_pair(0,s));
    dist[s] = 0;
    while(!p.empty()){  
        int u = p.top().second;
        p.pop();
        list<mpair>::iterator i;
        for(i = adj[u].begin();i != adj[u].end();i++){
            int v = (*i).first;
            int weight = (*i).second;
            if(dist[v] > dist[u] + weight){
                dist[v] = dist[u] + weight;
                p.push(make_pair(dist[v],v));
            }
        }
    }
    cout << "Vertex\t\tDistance from source is\n";
    for(int i=0;i<v;i++)
        cout << i << "\t\t" << dist[v] << "\n";
}

// driver function
int main(){
    Graph g(9);
    g.addEdge(0, 1, 4); 
	  g.addEdge(0, 7, 8); 
	  g.addEdge(1, 2, 8); 
	  g.addEdge(1, 7, 11); 
	  g.addEdge(2, 3, 7); 
	  g.addEdge(2, 8, 2); 
	  g.addEdge(2, 5, 4); 
	  g.addEdge(3, 4, 9); 
	  g.addEdge(3, 5, 14); 
	  g.addEdge(4, 5, 10); 
	  g.addEdge(5, 6, 2); 
	  g.addEdge(6, 7, 1); 
	  g.addEdge(6, 8, 6); 
	  g.addEdge(7, 8, 7); 

	  g.shortestPath(0); 
    return 0;
}
