.cpp.o:
	c++ -o $@ -c $< -std=c++17 -Wall

map_mat_test: map_mat_test.o map_mat.o
	c++ -o $@ map_mat_test.o map_mat.o

map_mat.o: map_mat.h
