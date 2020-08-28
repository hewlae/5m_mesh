#ifndef MAP_MAT_H_20200815_0200_
#define MAP_MAT_H_20200815_0200_

#include <vector>
#include <string>
#include <utility>

class map_mat{
private:
	long pos_x;
	long pos_y;
	std::vector<std::vector<long> > body;

	const long max_x = 225;//0 <= pos_x < max_x
	const long max_y = 150;//0 <= pos_y < max_y

public:
	map_mat(long x, long y, std::string file_name);
	std::pair<long, long> get_pos();
};

#endif//MAP_MAT_H_20200815_0200_
