all: Problem
	clang++ -L. answer.o -o answer

Problem: game_engine.cpp
	clang++ -std=c++11 -c game_engine.cpp -o answer.o

clean:
	rm *.o
	rm answer