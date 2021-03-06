/*CXXFLAGS := -std=c++11

main: Main.o Token.o StateMachine.o Scanner.o Symbol.o Node.o Parser.o
	g++ $(CXXFLAGS) -o $@ $^

Main.o: Main.cpp Token.h Debug.h
	g++ $(CXXFLAGS) -c $<

Token.o: Token.cpp Token.h
	g++ $(CXXFLAGS) -c $<

Scanner.o: Scanner.cpp Scanner.h Token.h StateMachine.h
	g++ $(CXXFLAGS) -c $<

StateMachine.o: StateMachine.cpp StateMachine.h
	g++ $(CXXFLAGS) -c $<

Symbol.o: Symbol.cpp Symbol.h
	g++ $(CXXFLAGS) -c $<

Node.o: Node.cpp Node.h
	g++ $(CXXFLAGS) -c $<

Parser.o: Parser.cpp Parser.h
	g++ $(CXXFLAGS) -c $<



clean:
	rm *.o main*/
CXXFLAGS := -fno-stack-protector -D_FORTIFY_SOURCE=0

all: compiler

compiler: Main.o Instructions.o Node.o Parser.o Scanner.o StateMachine.o Symbol.o Token.o
	g++ $(CXXFLAGS) -o $@ $^
	execstack -s ./compiler
	./compiler

Main.o: Main.cpp Scanner.h Symbol.h Parser.h Node.h Token.h Debug.h Instructions.h
	g++ $(CSSFLAGS) -c Main.cpp

Instructions.o: Instructions.cpp Instructions.h
	g++ $(CSSFLAGS) -c Instructions.cpp

Node.o: Node.cpp Node.h Debug.h Symbol.h Instructions.h
	g++ $(CSSFLAGS) -c Node.cpp

Parser.o: Parser.cpp Parser.h Debug.h Token.h Scanner.h Symbol.h Node.h
	g++ $(CSSFLAGS) -c Parser.cpp

Scanner.o: Scanner.cpp Scanner.h Debug.h Token.h StateMachine.h
	g++ $(CSSFLAGS) -c Scanner.cpp

StateMachine.o: StateMachine.cpp StateMachine.h Debug.h Token.h
	g++ $(CSSFLAGS) -c StateMachine.cpp

Symbol.o: Symbol.cpp Symbol.h Debug.h
	g++ $(CSSFLAGS) -c Symbol.cpp

Token.o: Token.cpp Token.h Debug.h
	g++ $(CSSFLAGS) -c Token.cpp

clean:
	-rm -f *.o *~ compiler
