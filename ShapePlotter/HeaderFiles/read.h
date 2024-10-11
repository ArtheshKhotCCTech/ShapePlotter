#include<iostream>
#include<string>
#include<fstream>
#include<iostream>

using namespace std;

class Read{
    public:
    Read();
    ~Read();
        string line;
        string file_name;
        void read(string path);
};