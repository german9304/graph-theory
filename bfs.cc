#include<iostream>
#include<list>
#include<queue>
#include<vector>

#include"graph.h"
#include"bfs.h"

// BFS breath first search  
void bfs(std::vector<std::list<Edge > > Adj, int size) {
	std::vector<bool> visited(size);
	std::queue<int> q;
	int root = 0;
	q.push(root);
	while(!q.empty()) {
		int front = q.front();
		auto li = Adj[front];
		for(auto it = li.begin(); it != li.end(); it++) {
			Edge e = *it;
			if(visited[e.to] == false) {
				std::cout << e << std::endl;
				q.push(e.to);
			}
		}
		q.pop(); // pop queue head
		visited[front] = true;
	}
}
