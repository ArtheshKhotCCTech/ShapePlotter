#include "../HeaderFiles/triangle.h"

Triangle::Triangle(vector<double> input_arr1)
{
    input_arr = input_arr1;
}

void Triangle::display()
{
    cout<<"Three points of triangle are : "<<endl;
}

void Triangle::draw()
{
    for(int i=0;i<6;i++){
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

Triangle::~Triangle()
{
}