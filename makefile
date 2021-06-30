CFLAGS = -std=c++17
LDFLAGS = 

main: main.cpp vector.hpp
	clear && g++ $(CFLAGS) -o main main.cpp $(LDFLAGS)

.PHONY: run clean

run: main
	clear && ./main

clean:
	rm -f main
