#pragma once
#include <string>
#include <vector>

#include "Token.h"
#include "Node.h"

using std::string;
using std::vector;


auto scan(string)->vector<Token>;
auto parse(vector<Token>)->Program*;
auto printSyntaxTree(Program*)->void;
auto interpret(Program*)->void;


