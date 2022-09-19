#include <iostream>
#include <string>
#include "all.h"

std::string checkerboard(int width, int height){
    std::string result = "";
    result += "Input Width: " + std::to_string(width) + "\n";
    result += "Input Height: " + std::to_string(height) + "\n";
    result += "\n";
    result += "Shape:\n";

    for(int x = 0; x < height; x ++){
        if(x % 2 == 1){
            result+= " ";

            for(int z = 0; z < width - 2; z++){
                result += "*";
            }

            result += " ";
        }
        else{
            for(int y = 0; y < width; y ++){
            result += "*";
            }   
        }
        
        result += "\n";
    }

    return result;
}