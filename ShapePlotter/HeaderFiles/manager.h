#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
#include "communicator.h"

using namespace std;

class Manager{
    public :
        Manager();
        void manage(vector<double> &input_arr, int choice);
        void manage_rectangle_case1(vector<double> &input_arr);
        void manage_rectangle_case2(vector<double> &input_arr);
        void manage_square_case1(vector<double> &input_arr);
        void manage_square_case2(vector<double> &input_arr);
        void manage_point(vector<double> &input_arr);
        void manage_line(vector<double> &input_arr);
        void manage_triangle(vector<double> &input_arr);
        void manage_circle(vector<double> &input_arr);
        double distanceSq(double x1, double y1, double x2, double y2);
        double slope(double x1, double y1, double x2, double y2);
        ~Manager();
};