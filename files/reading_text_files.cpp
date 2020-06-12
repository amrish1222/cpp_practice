#include <iostream>
#include <fstream>

int main()
{
    std::ifstream inFile;
    std::string inFilename = "read_file.txt";

    inFile.open(inFilename);

    if (inFile.is_open())
    {
        while(inFile)
        {
            std::string line;
            std::getline(inFile, line);
            std::cout << line << std::endl;
        }
        inFile.close();
    }
    else
    {
        std::cout << "Could not open file to read" << std::endl;
    }

    return 0;    

}