#ifndef GRAPH_H
#define GRAPH_H

#include<list>
#include<vector>
#include<iostream>

class Edge {
	public:
		Edge(int f, int t): from(f), to(t) {}
		int from;
		int to;
		int From() const {
			return from;
		}
		int To() const {
			return to;
		}
		int one() {
			return 1;
		}	
};

std::ostream& operator<<(std::ostream& os, const Edge& e);

class Graph {
	public:
		Graph(int v, int s): adj(std::vector<std::list<Edge > >(v)), size(s) {}; 
		std::vector<std::list<Edge > > Adj();
		int Size();
		int Vertices();
		void addEdge(Edge);
	private:
		std::vector<std::list<Edge > > adj;
		int v; // total graph vertices
		int size;
};

#endif /* GRAPH_H */
