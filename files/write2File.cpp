#include <iostream>
#include <fstream>

int main()
{
    std::ofstream outFile;
    std::string outFilename = "write.txt";
    
    outFile.open(outFilename);

    if(outFile.is_open())
    {
        outFile << "1. Wrting to file using fstream" << std::endl;
        outFile.close();
    }
    else{
        std::cout << "Cannot open file to write" << std::endl;
    }

    return 0;

}