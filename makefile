CFLAGS = -std=c++17
LDFLAGS = 

main: main.cpp vector.hpp
	g++ $(CFLAGS) -o main main.cpp $(LDFLAGS)

.PHONY: run clean

run: main
	./main

clean:
	rm -f main
