#include <iostream>
#include "all.h"

std::string check3x3(int width, int height){
    std::string result = "";
    result += "Input Width: " + std::to_string(width) + "\n";
    result += "Input Height: " + std::to_string(height) + "\n\n";
    result += "Shape: \n";

    bool star = true;
    int count = 0;
    int change = 0;
    std::string stars = "*";
    std::string space = " ";
    for(int x = 0; x < height; x ++){
        for(int y = 0; y < width; y++){
            if(star)
                result += stars;
            else
                result += space;

            count ++;

            if(count == 3){
                count = 0;
                if(star)
                    star = false;
                else
                    star = true;
            }
        }

        result += "\n";
        count = 0;
        
        if(star)
            star = false;
        else
            star = true;

        if(x % 3 == 2){
            change ++;
        }

        if(change % 2 != 0){
            stars = " ";
            space = "*";
        }
        else{
            stars = "*";
            space = " ";
        }
    }

    return result;
}