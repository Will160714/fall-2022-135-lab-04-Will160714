main: main.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o checkerboard3x3.o
	g++ -o main main.o box.o checkerboard.o cross.o lower.o upper.o	trapezoid.o checkerboard3x3.o

main.o: main.cpp all.h
	g++ -c main.cpp

box.o: box.cpp all.h
	g++ -c box.cpp

checkerboard.o: checkerboard.cpp all.h
	g++ -c checkerboard.cpp

cross.o: cross.cpp all.h
	g++ -c cross.cpp

lower.o: lower.cpp all.h 
	g++ -c lower.cpp

upper.o: upper.cpp all.h
	g++ -c upper.cpp

trapezoid.o: trapezoid.cpp all.h
	g++ -c trapezoid.cpp

checkerboard3x3.o: checkerboard3x3.cpp all.h
	g++ -c checkerboard3x3.cpp

clean:
	rm -f main.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o checkerboard3x3.o


