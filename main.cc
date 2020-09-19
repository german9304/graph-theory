#include<iostream>
#include<list>
#include<queue>
#include<vector>

#include"graph.h"
#include"bfs.h"

int main() {
	int v = 6;
	int s = 5;
	Edge edges[] = {
		{0, 1}, 
		{0, 2}, 
		{0, 3}, 
		{2, 4}, 
		{2, 5}
	};
	Graph g(v, s);
	for(auto edge: edges) {
		g.addEdge(edge);
	}
	bfs(g.Adj(), v);
}
