#include "../HeaderFiles/write.h"

Write::Write()
{
}

Write::~Write()
{
}

void Write::writer(string output)
{
    ofstream myFile;
    myFile.open("output.dat");
    myFile << output;
    myFile.close();
}
