#pragma once
#include "shape.h"
#include "point.h"
#include "communicator.h"
#include<iostream>

class Line : public Shape{
    public :
        string coordinates;
        vector<double> input_arr;
        Line(vector<double> input_arr1);
        ~Line();
        void draw();
};