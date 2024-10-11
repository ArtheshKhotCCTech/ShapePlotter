#pragma once
#include "shape.h"
#include<vector>
#include<string>
#include "communicator.h"
#include <iostream>

using namespace std;

class Point : public Shape{
    public :
        string coordinates;
        vector<double> input_arr;
        Point(vector<double> input_arr1);
        ~Point();
        void draw();
};