CXXFLAGS = -std=c++14 -Wall -W -Werror

main: graph.o bfs.o
	g++ $(CXXFLAGS) bfs.o graph.o main.cc -o main
bfs.o: bfs.cc bfs.h
	g++ -c bfs.cc
graph.o: graph.cc graph.h
	g++ -c graph.cc
clean:
	rm main
