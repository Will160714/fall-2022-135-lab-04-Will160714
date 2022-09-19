#include <iostream>
#include <string>
#include "all.h"

std::string cross(int size){
    std::string result = "";
    std::string array[size];
    int first = 0;
    int last = size - 1;
    
    result += "Input size: " + std::to_string(size) + "\n";
    result += "\n";
    result += "Shape: \n";

    for(int x = 0; x < size; x ++){
        array[x] = " ";
    }

    for(int x = 0; x < size; x++){
        for(int y = 0; y < size; y ++){
            array[first] = "*";
            array[last] = "*";
            result += array[y];
        }

        for(int z = 0; z < size; z ++){
            array[z] = " ";
        }

        first ++;
        last --;
        result += "\n";
    }

    return result;
}