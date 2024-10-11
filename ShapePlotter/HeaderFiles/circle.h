#pragma once
#include "shape.h"
#include "point.h"
#include<iostream>
#include <vector>
#include<math.h>
#include "communicator.h"
#define M_PI 3.14159265358979323846

class Circle : public Shape{
    public:
        double radius;
        string coordinates;
        vector<double> input_arr;
        vector<double> output_arr;
        Circle(vector<double> input_arr1);
        ~Circle();
        void draw();
};