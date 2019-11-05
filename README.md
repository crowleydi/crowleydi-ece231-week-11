# ECE231L Homework Week 11

## Overview

For this assignment I have given you code for the Set class. Copy this class to Map.h and modify it
to implement the std::map interface. Compare the run time of your Set class with the built in
std::set class when loading the `numbers` file, and searching for all values in the `search` file.

## Map

  1. Add a template parameter for the Value type.
     ```
     template<typename K, typename V>
     class Map
     {
     ...
     };
     ```
  1. Add a `value` data member to the btnode class.
     ```
     class btnode
     {
        K key;
        V value;
        ...
        
        btnode(const K& key);
        btnode(const K& key, const V& value);
     };
     ```
  1. Implement `operator[]` for Map.
     ```
     V& operator[](const K& key); // no const version
     ```
  1. Change the `insert()` method.
     ```
     void insert(const K& key, const V& value);
     ```
  1. Implement `at()` for Map. If the key cannot be found, throw a
     `std::out_of_range` exception.
     ```
     V& at(const K& key);
     const V& at(const K& key) const;
     ```
  1. Unit tests.
    
## Timings

Use `Timer.h` to make the following measurements:

  1. Time to load `numbers` into std::set.
  1. Time to load `numbers` into Set.
  1. Time to lookup all values in `search` file using std::set.
  1. Time to lookup all values in `search` file using Set.

Run each test with sorted `numbers` and with unsorted `numbers`.
Write your code so the `numbers` file is read from `std::cin` like this:
   ```
   Set<int> s;
   int val;
   while (std::cin >> val) s.insert(val);
   ```
   To read the unsorted `numbers` file run the command `cat numbers | ./runtests`.
   To read the`numbers` file sorted, run the command `sort -n numbers | ./runtests`.
   
   ## Coverage report

Install lcov with the command `sudo apt install lcov`

  1. Compile with --coverage
  1. Run `make coverage`
  1. Make sure all executable lines are tested in `Set.h` and `Map.h`
  1. Add the `out` directory to your repository so I can see the coverage report.
    
