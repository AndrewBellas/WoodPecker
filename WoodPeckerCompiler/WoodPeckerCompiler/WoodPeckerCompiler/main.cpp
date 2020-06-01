// WoodPeckerCompiler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <istream>
#include <sstream>


int main()
{
    //Read current line of WoodPecker source code in test.lang and store in variable:
    std::string content;

    //C://Users/New/Desktop/WoodPecker/WoodPeckerCompiler/WoodPeckerCompiler/WoodPeckerCompiler/test.lang
    std::string file = "C://Users/New/Desktop/WoodPecker/WoodPeckerCompiler/WoodPeckerCompiler/WoodPeckerCompiler/test.lang";

    //Flag string for parser
    std::string temp;

    //Open file stream
	std::ifstream input(file);

    while(std::getline(input, content)) {
        temp += content;
    }

    //Close stream to optimise memory
    input.close();

    //DEBUG
    std::cout << temp << std::endl;

}
