# Use the C++ compiler to link
LINK.o = $(LINK.cc)
# Flags to compile for the debugger
CXXFLAGS =-Wall -g --coverage

# when running for timing, compile with -O3 (change -g -O3)

all: runtests

runtests: runtests.o
runtests.o: Set.h #Map.h

coverage:
	echo "Did you compile with --coverage?"
	./runtests
	gcov runtests.cpp -m
	lcov --capture --directory . --output-file coverage.info
	mkdir -p out
	genhtml coverage.info --output-directory out
clean:
	rm -f runtests *.o

