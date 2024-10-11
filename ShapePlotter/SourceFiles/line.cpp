#include "../HeaderFiles/line.h"

using namespace std;

Line::Line(vector<double> input_arr1)
{
    input_arr = input_arr1;
}

void Line::draw()
{
    for(int i=0;i<4;i++){
        coordinates += to_string(input_arr[i]);
        coordinates += " ";
        coordinates += to_string(input_arr[i+1]);
        coordinates += "\n";
        i++;
    }
    Communicator c;
    c.outputwriter(coordinates);
}

Line::~Line()
{
}