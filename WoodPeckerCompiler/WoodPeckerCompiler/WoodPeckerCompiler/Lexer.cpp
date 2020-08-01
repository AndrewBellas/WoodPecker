//This lexically analyses the input stream of source code from lang files

#define TOKEN_QUOTE '\''

#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <istream>
#include <iterator>

class Lexer {


public:
	std::string sourceCode;

	std::vector<std::string> stringSplitter(std::string inputString, std::vector<std::string>& inputVec) {

		std::istringstream splitter(inputString);

		std::istream_iterator<std::string> y = std::istream_iterator<std::string>(splitter);
		std::istream_iterator<std::string> n;

		//ERROR
	    //inputVec(y, n);

		return inputVec;
	}

	//Novel solution?
	Lexer(std::string sourceCode): sourceCode(sourceCode){
		
		//this->sourceCode = pSourceCode;
	}

	std::vector<std::string> tokenize(std::string t_sourceCode) {
		//C++ Implementation

		//TODO: Call method here that splits the string by tokens
		t_sourceCode = this->sourceCode;

	    //Split string to get tokens
		std::istringstream iss(t_sourceCode);
		std::vector<std::string> tokens((std::istream_iterator<std::string>(iss)), std::istream_iterator<std::string>());

		//stringSplitter(t_sourceCode, tokens);

		std::string word;

		for (std::size_t i = 0; i < tokens.size(); i++) {
			//std::cout << tokens[i] << std::endl;
			word = tokens[i];


			//TODO: Convert to switch-case for optimisation if non-integral
			if (word == "var") {
				tokens.push_back("['VAR_DECLARATION', \'" + word + "\'" + "]");
			}

			else if (word == "write") {
				tokens.push_back("[METHOD_DECLARATION', \'" + word + "\'" + "]");
			}

			else if (word == "read") {
				tokens.push_back("['VAR_DECLARATION', \'" + word + "\'" + "]");
			}

			



		}

		//std::cout << tokens << std::endl;

		return tokens;
	}
};