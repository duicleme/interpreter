app.out:Main.o Token.o Scanner.o Printer.o Parser.o
	g++ -o app.out Main.o Token.o Scanner.o Printer.o Parser.o
	
Main.o:Main.h Main.cpp
	g++ -c -std=c++17 -o Main.o Main.cpp
	
Token.o:Token.h Token.cpp
	g++ -c -std=c++17 -o Token.o Token.cpp
	
Scanner.o:Token.h Scanner.cpp
	g++ -c -std=c++17 -o Scanner.o Scanner.cpp

Printer.o:Node.h Printer.cpp
	g++ -c -std=c++17 -o Printer.o Printer.cpp

Parser.o:Token.h Node.h Parser.cpp
	g++ -c -std=c++17 -o Parser.o Parser.cpp

clean:
	rm *.o app.out
