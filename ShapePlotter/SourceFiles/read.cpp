#include "../HeaderFiles/read.h"

Read::Read()
{
}

Read::~Read()
{
}

void Read::read(string file_name)
{
    ifstream myFile (file_name);
    if(myFile.is_open()){
        while(getline(myFile, line)){
            cout<<line<<endl;
        }
        myFile.close();
    }
    else{
        cout<<"Unable to open file";
    }
}