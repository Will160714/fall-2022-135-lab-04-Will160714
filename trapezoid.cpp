#include <iostream>
#include "all.h"

std::string trapezoid(int width, int height){
    std::string result;
    result += "Input width: " + std::to_string(width) + "\n";
    result += "Input height: " + std::to_string(height) + "\n";

    if(height > width*0.5){
        result += "Impossible shape!";
        return result;
    }

    for(int x = 0; x < height; x++){
        for(int a = 0; a < x; a ++){
            result += " ";
        }

        for(int y = 0; y < width - 2*x; y ++){
            result += "*";
        }

        for(int a = 0; a < x; a ++){
            result += " ";
        }

        result += "\n";
    }

    return result;
}