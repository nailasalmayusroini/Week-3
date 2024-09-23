# Target to compile the C++ program
Quadratic_Equation: Quadratic_Equation.o
	g++ Quadratic_Equation.o -o Quadratic_Equation

# Target to compile the object file
Quadratic_Equation.o: Quadratic_Equation.cpp
	g++ -c Quadratic_Equation.cpp -o Quadratic_Equation.o 

# Target to run the program
run: Quadratic_Equation
	./Quadratic_Equation

# Target to clean up compiled files
clean:
	rm -f Quadratic_Equation.o Quadratic_Equation