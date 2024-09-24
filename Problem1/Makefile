# Target to compile the object file
largest_number: largest_number.o
	g++ largest_number.o -o largest_number.exe

# Target to compile the C++ program
largest_number.o: largest_number.cpp
	g++ -c largest_number.cpp -o largest_number.o

# Target to run the program (interactively)
run: largest_number
	./largest_number.exe

# Target to compile the object Test file
largest_numberTest: largest_numberTest.o
	g++ largest_numberTest.o -o largest_numberTest.exe

# Target to compile the C++ Test program
largest_numberTest.o: largest_numberTest.cpp
	g++ -c largest_numberTest.cpp -o largest_numberTest.o

# Target to run the Test program
test: largest_numberTest
	./largest_numberTest.exe

# Target to clean up compiled files
clean:
	rm -f largest_number.o largest_numberTest.o largest_number.exe largest_numberTest.exe
