#include<vector>
#include<list>
#include"graph.h"
#include<iostream>

std::ostream& operator<<(std::ostream& os, const Edge& e) {
	return	os <<  e.from << " " << e.to;
}

std::vector<std::list<Edge > > Graph::Adj() {
	return adj;
}

void Graph::addEdge(Edge e) {
	Edge to(e.from, e.to);
	Edge from(e.to, e.from);
	adj[e.from].push_back(to);
	adj[e.to].push_back(from);
}

int Graph::Size() {
	return size;
}

int Graph::Vertices() {
	return v;
}
