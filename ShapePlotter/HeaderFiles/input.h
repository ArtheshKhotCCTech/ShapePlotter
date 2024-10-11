#pragma once
#include<iostream>
#include<vector>
#include "point.h"

using namespace std;

class Input{
    public:
    int ch;
    int points_count;
    double x,y,length,breadth,side,radius;
    Input();
    int get_input(vector<double> &input_arr);
    ~Input();
};