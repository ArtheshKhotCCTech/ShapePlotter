#include "../HeaderFiles/circle.h"

using namespace std;

Circle::Circle(vector<double> input_arr1)
{
    input_arr = input_arr1;
}

Circle::~Circle()
{
}

void Circle::draw()
{
    radius = input_arr[2];
    for (int i = 0; i <= 100; ++i) {
        double angle = 2.0 * M_PI * i / 100;
        coordinates += to_string(input_arr[0] + radius * cos(angle)) + " " + to_string(input_arr[1] + radius * sin(angle)) + "\n";
    }
    coordinates += to_string(input_arr[0] + radius) + " " + to_string(input_arr[1]);
    Communicator c;
    c.outputwriter(coordinates);
}
