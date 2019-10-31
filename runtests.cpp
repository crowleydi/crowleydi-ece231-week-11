#include <iostream>

// change the value below to 1 to run tests against your StringList class.
// change the value below to 0 to run tests against the built in std::list.

#include <string>
#include <set>
#include <map>

#include "Timer.h"
#include "Set.h"
//#include "Map.h"

void Assert(bool cond, std::string message)
{
	if (cond)
		std::cout << "Pass: " << message << std::endl;
	else
		std::cerr << "FAIL: " << message << std::endl;
}

int main()
{
	// TODO:
	// Write more tests to fully test your classes.
	Set<int> s;
	s.insert(5);
	s.insert(4);
	s.insert(7);

	Assert(s.contains(5), "set contains 5");
	Assert(!s.contains(6), "set does not contain 6");

	// Set<std::string> s2;

	// Write unit tests for Map
	// Map<std::string, int> m1;
	// m1["five"] = 5;

	// Map<std::string, std::string> m2;
	// m2["LAX"]="Los Angeles";

	// load , time numbers into std::set

	// load , time numbers into Set

	// time to search all values from search in the loaded std::set

	// time to search all values from search in the loaded Set

	return 0;
}


