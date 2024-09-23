# Target to compile the C++ program
largest_number: largest_number.o
	g++ largest_number.o -o largest_number

# Target to compile the object file
largest_number.o: largest_number.cpp
	g++ -c largest_number.cpp -o largest_number.o

# Target to run the program
run: largest_number
	./largest_number

# Target to clean up the compiled files
clean:
	rm -f largest_number.o largest_number