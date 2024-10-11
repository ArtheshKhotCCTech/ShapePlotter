#pragma once
#include "shape.h"
#include "point.h"
#include<iostream>
#include "communicator.h"

using namespace std;

class Triangle : public Shape{
    public:
        string coordinates;
        vector<double> input_arr;
        Triangle(vector<double> input_arr1);
        void display();
        void draw();
        ~Triangle();
};