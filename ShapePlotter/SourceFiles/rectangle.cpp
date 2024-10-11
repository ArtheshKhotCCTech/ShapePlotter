#include "../HeaderFiles/rectangle.h"

void Rectangle::draw()
{
    for(int i=0;i<8;i++){
        coordinates += to_string(input_arr[i]);
        coordinates += " ";
        coordinates += to_string(input_arr[i+1]);
        coordinates += "\n";
        i++;
    }
    coordinates += to_string(input_arr[0]);
    coordinates += " ";
    coordinates += to_string(input_arr[1]);
    Communicator c;
    c.outputwriter(coordinates);
}

Rectangle::Rectangle(vector<double> input_arr1)
{
    input_arr = input_arr1;
}

Rectangle::~Rectangle()
{
}