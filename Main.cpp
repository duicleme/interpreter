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
			printLine 'HomeLab Studio 702 --> v2022.10.11';
			printLine 'Hello World!';
			printLine 1*2+3*4;
			printLine true  or  'Hello, World!';
			printLine false or  'Hello, World!';
			printLine true  and 'Hello, World!';
			printLine false and 'Hello, World!';
			global = 4;
			var local = 13;
			printLine 'global: ', global;
			printLine 'local:  ', local;
			global = local = 7;
			printLine 'global:', global;
			printLine 'local :', local;
			for i=0, i<3, i=i+1 {
				printLine 'i: ', i;
			}
			for i=0, i<5, i=i+1 {
				if i == 1 {
					printLine 'one';
				} elif i == 2 {
					printLine 'two';
				} elif i == 3 {
					printLine 'tree';
				} else {
					printLine i;
				}
			}
			for i=0, i<3, i=i+1 {
				if i == 1 {
					continue;
				}
				printLine 'i: ', i;
			}
			
			sayHoHoHo();
			add(1,3);
			printLine getC(3,4);
			printLine sqrt(getC(3,4));
			
			printLine [1,2,3];
			printLine ['first','second','third'][1];
			var array = ['first','second','third'];
			array[1] = '2nd';
			printLine array[1];
			
		}
		
		function sayHoHoHo() {
			printLine 'Ho! Ho! Ho!';
		}
		
		function add(a,b) {
			printLine a+b;
		}
		
		function getC(a,b) {
			return a*a+b*b;
		}
	)"""";
	
	auto tokenList = scan (sourceCode);
	printTokenList (tokenList);
	cout << endl;
	auto syntaxTree = parse(tokenList);
	printSyntaxTree(syntaxTree );
	cout << endl;
	interpret(syntaxTree );
	
		
	return 0;
}

auto printTokenList(vector<Token> tokenList)->void
{
	cout << setw(12) << left << "KIND" << "STRING" << endl;
	cout << string(23, '-') << endl;
	for ( auto& token: tokenList )
		cout << token << endl;
}
