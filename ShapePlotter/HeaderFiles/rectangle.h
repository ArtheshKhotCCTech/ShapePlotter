#pragma once
#include "shape.h"
#include<iostream>
#include<vector>
#include<string>
#include "communicator.h"

using namespace std;

class Rectangle : public Shape{
    public :
        string coordinates;
        vector<double> input_arr;
        Rectangle(vector<double> input_arr1);
        void draw();
        ~Rectangle();
};