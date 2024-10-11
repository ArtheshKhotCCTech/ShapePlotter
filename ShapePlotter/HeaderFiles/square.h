#pragma once
#include "shape.h"
#include<iostream>
#include<string>
#include<vector>
#include "communicator.h"

using namespace std;

class Square : public Shape {
    public:
        string coordinates;
        vector<double> input_arr;
        Square(vector<double> input_arr1);
        void draw();
        ~Square();
};