#include "../HeaderFiles/square.h"

Square::Square(vector<double> input_arr1)
{
    input_arr = input_arr1;
}

void Square::draw()
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
    cout<<coordinates;
    Communicator c;
    c.outputwriter(coordinates);
}

Square::~Square()
{
}
