# Use the C++ compiler to link
LINK.o = $(LINK.cc)
# Flags to compile for the debugger
CXXFLAGS =-Wall -g

# when running for timing, compile with -O3 (change -g -O3)

all: runtests

runtests: runtests.o
runtests.o: Set.h #Map.h

clean:
	rm -f runtests *.o

