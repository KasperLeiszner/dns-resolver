#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string fileName = "names.txt";
    string name;

    ifstream fileReader(fileName);

    if(fileReader.is_open() == false)
    {
        cerr << "Couldn't open file, check if file is missing" << endl;
        return 1;
    }

    if (fileReader.peek() == EOF)
    {
        cerr << fileName + " is empty, please provide names to the file!" << endl;
        return 1;
    }

    while(getline (fileReader, name)) {
        cout << name << endl;       
    }

    fileReader.close();

    return 0;
}