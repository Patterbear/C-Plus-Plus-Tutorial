maths: maths.o maths_utils.o
	g++ maths.o maths_utils.o -o  maths

maths.o: maths.cpp
	g++ -c maths.cpp

maths_utils.o: maths_utils.cpp
	g++ -c maths_utils.cpp

clean:
	rm *.o