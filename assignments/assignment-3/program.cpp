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

    ofstream fileWriter("uppercase-names.txt");

    while(getline (fileReader, name)) {
        for (int i = 0; i < name.length(); i++)
        {
            fileWriter << (char)toupper(name[i]);

        }

        fileWriter << endl;
    }

    fileWriter.close();
    fileReader.close();

    return 0;
}