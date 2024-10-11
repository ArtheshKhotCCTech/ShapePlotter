#include "../HeaderFiles/point.h"

Point::Point(vector<double> input_arr1)
{
    input_arr = input_arr1;
}

void Point::draw()
{
    coordinates += to_string(input_arr[0]);
    coordinates += " ";
    coordinates += to_string(input_arr[1]);
    Communicator c;
    c.outputwriter(coordinates);
}

Point::~Point()
{
}