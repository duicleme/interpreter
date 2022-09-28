#include "Main.h"

#include <iostream>
#include <string>
#include <iomanip>

using std::endl;
using std::setw;
using std::left;
using std::string;
using std::cout;

auto printTokenList(vector<Token> tokenList)->void;

auto main ( int argc, char** argv)->int 
{
	string sourceCode = R""""(
		function main() {
			print 'Hello World!';
			printLine 1+2*3;
		}
	)"""";
	
	auto tokenList = scan (sourceCode);
	printTokenList (tokenList);
	cout << endl;
	auto syntaxTree = parse(tokenList);
	printSyntaxTree(syntaxTree );
	
		
	return 0;
}

auto printTokenList(vector<Token> tokenList)->void
{
	cout << setw(12) << left << "KIND" << "STRING" << endl;
	cout << string(23, '-') << endl;
	for ( auto& token: tokenList )
		cout << token << endl;
}
