#include<iostream>
#include "../HeaderFiles/input.h"
#include "../HeaderFiles/manager.h"

using namespace std;

int main() {
    int choice;
    vector<double> input_arr;
    Input input;
    choice = input.get_input(input_arr);
    Manager m;
    m.manage(input_arr, choice);
}