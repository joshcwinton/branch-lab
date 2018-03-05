CXXFLAGS=-std=c++14
OBJECTS=rect.o

main: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)

main.o: main.cpp rect.h

rect.o: rect.cpp rect.h

triangles.o: triangle.cpp triangle.h

tests: tests.o $(OBJECTS)
	g++ -o tests tests.o tests_rect.cpp tests_triangle.cpp $(OBJECTS)

clean:
	rm main.o $(OBJECTS)
