# main: main.o funcs.o
# 	g++ -o main main.o funcs.o

# tests: tests.o funcs.o
# 	g++ -o tests tests.o funcs.o

main: main.o caesar.o vigenere.o decrypt.o
	g++ -o main main.o caesar.o vigenere.o decrypt.o

tests: tests.o caesar.o vigenere.o decrypt.o
	g++ -o tests tests.o caesar.o vigenere.o decrypt.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

caesar.o: caesar.cpp caeser.h

decrypt.o: decrypt.cpp decrypt.h vigenere.h caeser.h

vigenere.o: vigenere.cpp vigenere.h caeser.h

funcs.o: funcs.cpp funcs.h

main.o: main.cpp funcs.h

tests.o: tests.cpp doctest.h caesar.o vigenere.o decrypt.o

test-ascii.o: test-ascii.cpp

clean:
	rm -f main.o funcs.o tests.o test-ascii.o caesar.o vigenere.o decrypt.o
