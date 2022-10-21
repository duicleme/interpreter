app.out:Main.o Token.o Scanner.o Printer.o Parser.o Interpreter.o Datatype.o BuiltinFunctionTable.o
	g++ -o app.out Main.o Token.o Scanner.o Printer.o Parser.o Interpreter.o Datatype.o BuiltinFunctionTable.o
	
Main.o:Main.h Main.cpp
	g++ -c -std=c++17 -o Main.o Main.cpp
	
Token.o:Token.h Token.cpp
	g++ -c -std=c++17 -o Token.o Token.cpp
	
Scanner.o:Token.h Scanner.cpp
	g++ -c -std=c++17 -o Scanner.o Scanner.cpp

Printer.o:Node.h Printer.cpp
	g++ -c -std=c++17 -o Printer.o Printer.cpp
	

Parser.o:Token.h Parser.cpp
	g++ -c -std=c++17 -o Parser.o Parser.cpp

Datatype.o:Datatype.h Datatype.cpp
	g++ -c -std=c++17 -o Datatype.o Datatype.cpp

BuiltinFunctionTable.o: Datatype.h BuiltinFunctionTable.cpp
	g++ -c -std=c++17 -o BuiltinFunctionTable.o BuiltinFunctionTable.cpp

Interpreter.o:Node.h Interpreter.cpp
	g++ -c -std=c++17 -o Interpreter.o Interpreter.cpp

clean:
	rm *.o app.out
