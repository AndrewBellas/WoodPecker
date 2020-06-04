//This lexically analyses the input stream of source code from lang files
#include <string>
#include <iostream>

class Lexer {

public:
	std::string sourceCode;

	//Novel solution?
	Lexer(std::string sourceCode): sourceCode(sourceCode){
		
		//this->sourceCode = pSourceCode;
	}

	std::string tokenize(std::string sourceCode) {
		//std::cout << "test" << std::endl;
		//C++ Implementation
		return "test";
	}
};