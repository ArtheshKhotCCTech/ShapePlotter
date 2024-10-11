#include "../HeaderFiles/manager.h"

Manager::Manager()
{
}

void Manager::manage(vector<double> &input_arr, int choice)
{  
    switch (choice){
        case 1:
        manage_point(input_arr);
        break;

        case 2:
        manage_line(input_arr);
        break;

        case 3:
        manage_rectangle_case1(input_arr);
        break;

        case 4:
        manage_rectangle_case2(input_arr);
        break;

        case 5:
        manage_square_case1(input_arr);
        break;

        case 6:
        manage_square_case2(input_arr);
        break;

        case 7:
        manage_circle(input_arr);
        break;

        case 9:
        manage_triangle(input_arr);
        break; 
    }
}

void Manager::manage_rectangle_case1(vector<double> &input_arr)
{
    vector<double> points_distance;
    points_distance.push_back(distanceSq(input_arr[0],input_arr[1],input_arr[2],input_arr[3]));
    points_distance.push_back(distanceSq(input_arr[2],input_arr[3],input_arr[4],input_arr[5]));
    points_distance.push_back(distanceSq(input_arr[4],input_arr[5],input_arr[6],input_arr[7]));
    points_distance.push_back(distanceSq(input_arr[0],input_arr[1],input_arr[4],input_arr[5]));
    points_distance.push_back(distanceSq(input_arr[0],input_arr[1],input_arr[6],input_arr[7]));
    points_distance.push_back(distanceSq(input_arr[2],input_arr[3],input_arr[6],input_arr[7]));

    sort(points_distance.begin(),points_distance.end());

    if(points_distance[0]==0){
        cout<<"Do not enter same points";
    }
    else if(points_distance[0]==points_distance[1] && points_distance[0]==points_distance[2]){
        cout<<"Not a rectangle";
    }
    else if(points_distance[0]==points_distance[1] && points_distance[2]==points_distance[3]){
        Communicator c;
        c.caller(2, input_arr);
    }
    else{
        cout<<"Not a rectangle";
    }
}

void Manager::manage_rectangle_case2(vector<double> &input_arr)
{
    if(input_arr[2]==input_arr[3]){
        cout<<"Do not enter same lengths";
    }
    vector<double> input_arr1;
    input_arr1.push_back(input_arr[0]);
    input_arr1.push_back(input_arr[1]);
    input_arr1.push_back(input_arr[0]);
    input_arr1.push_back(input_arr[1]+input_arr[2]);
    input_arr1.push_back(input_arr[0]+input_arr[3]);
    input_arr1.push_back(input_arr[1]+input_arr[2]);
    input_arr1.push_back(input_arr[0]+input_arr[3]);
    input_arr1.push_back(input_arr[1]);
    Communicator c;
    c.caller(6, input_arr1);
}

void Manager::manage_square_case1(vector<double> &input_arr)
{
    vector<double> points_distance;
    points_distance.push_back(distanceSq(input_arr[0],input_arr[1],input_arr[2],input_arr[3]));
    points_distance.push_back(distanceSq(input_arr[2],input_arr[3],input_arr[4],input_arr[5]));
    points_distance.push_back(distanceSq(input_arr[4],input_arr[5],input_arr[6],input_arr[7]));
    points_distance.push_back(distanceSq(input_arr[0],input_arr[1],input_arr[4],input_arr[5]));
    points_distance.push_back(distanceSq(input_arr[0],input_arr[1],input_arr[6],input_arr[7]));
    points_distance.push_back(distanceSq(input_arr[2],input_arr[3],input_arr[6],input_arr[7]));

    sort(points_distance.begin(),points_distance.end());

    if(points_distance[0]==0){
        cout<<"Do not enter same points";
    }
    else if(points_distance[0]==points_distance[1] && points_distance[0]==points_distance[2]){
        Communicator c;
        c.caller(1, input_arr);
    }
    else{
        cout<<"Not a square";
    }
}

void Manager::manage_square_case2(vector<double> &input_arr)
{
    vector<double> input_arr1;
    input_arr1.push_back(input_arr[0]);
    input_arr1.push_back(input_arr[1]);
    input_arr1.push_back(input_arr[0]);
    input_arr1.push_back(input_arr[1]+input_arr[2]);
    input_arr1.push_back(input_arr[0]+input_arr[2]);
    input_arr1.push_back(input_arr[1]+input_arr[2]);
    input_arr1.push_back(input_arr[0]+input_arr[2]);
    input_arr1.push_back(input_arr[1]);
    Communicator c;
    c.caller(7, input_arr1);
}

void Manager::manage_point(vector<double> &input_arr)
{
    Communicator c;
    c.caller(3, input_arr);   
}

void Manager::manage_line(vector<double> &input_arr)
{
    vector<double> points_distance;
    points_distance.push_back(distanceSq(input_arr[0],input_arr[1],input_arr[2],input_arr[3]));
    if(points_distance[0]==0){
        cout<<"Do not enter same  points";
        return;
    }
    Communicator c;
    c.caller(4, input_arr);
}

void Manager::manage_triangle(vector<double> &input_arr)
{
    if(slope(input_arr[0],input_arr[1],input_arr[2],input_arr[3]) == slope(input_arr[2],input_arr[3],input_arr[4],input_arr[5])){
        cout<<"Points cannot be collinear";
        return;
    }
    Communicator c;
    c.caller(8, input_arr);
}

void Manager::manage_circle(vector<double> &input_arr)
{
    if(input_arr[2]==0){
        cout<<"Radius cannot be 0";
        return;
    }
    Communicator c;
    c.caller(5, input_arr);
}

double Manager::distanceSq(double x1, double y1, double x2, double y2)
{
    return (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
}

double Manager::slope(double x1, double y1, double x2, double y2)
{
    return (y2-y1)/(x2-x1);
}

Manager::~Manager()
{
}
