// WoodPeckerCompiler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <istream>
#include <sstream>
#include "Lexer.cpp"


int main()
{


    //**********************************
    //
    // EXPERIMENTAL
    //std::string source;

    //Lexer lex(source);

    //**********************************


    //Read current line of WoodPecker source code in test.lang and store in variable:
    std::string content;

    //C://Users/New/Desktop/WoodPecker/WoodPeckerCompiler/WoodPeckerCompiler/WoodPeckerCompiler/test.lang
    std::string file = "C://Users/New/Desktop/WoodPecker/WoodPeckerCompiler/WoodPeckerCompiler/WoodPeckerCompiler/test.lang";

    //Flag string for parser
    std::string temp;

    //Open file stream
	std::ifstream input(file);

    //Feed in tokens
    while(std::getline(input, content)) {
        temp += content;
    }

    Lexer lex(temp);
    std::vector<std::string> tokens;
    
    tokens = lex.tokenize(temp);
    //std::cout << tokens << std::endl;

    //DEBUG: Lexer now tokenises!
    std::cout << tokens[0] << std::endl;


    //Close stream to optimise memory
    input.close();

    //DEBUG
    //std::cout << temp << std::endl;

}
