#include "map_mat.h"

#include <fstream>
#include <cstdio>
#include <iostream>

map_mat::map_mat(long x, long y, std::string file_name){
    pos_x = x;
    pos_y = y;

    body = std::vector<std::vector<long> >(max_y, std::vector<long>(max_x));

    std::fstream data;
    data.open(file_name, std::ios::in);
    if(!data.is_open()){
        std::cout << "Couldn't open " << file_name << std::endl;
        std::exit(EXIT_FAILURE);
    }
    std::string str;
    for(long i = 0; std::getline(data, str); i++){
        //std::cout << i << " : " << str << std::endl;
        if(str == "<gml:tupleList>\r"){
            break;
        }
    }
    for(long i = 0; i < max_y; i++){
        for(long j = 0; j < max_x; j++){
            if(!std::getline(data, str)){
                printf("Data implementation error ");
                std::cout << file_name << " No. " << i*max_x + j << std::endl;
                std::exit(EXIT_FAILURE);
            }
        }
        //printf("\n");
    }
    if(std::getline(data, str)){
        printf("overloaded ");
        std::cout << str << std::endl;
    }
    //*/
    data.close();
}
