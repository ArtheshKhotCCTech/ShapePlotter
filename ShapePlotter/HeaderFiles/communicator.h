#pragma once
#include<vector>
#include<string>
#include "square.h"
#include "rectangle.h"
#include "write.h"
#include "point.h"
#include "line.h"
#include "circle.h"
#include "triangle.h"

using namespace std;

class Communicator{
    public:
    Communicator();
    void caller(int decision, vector<double> input_arr);
    void outputwriter(string coordinates);
    ~Communicator();
};
