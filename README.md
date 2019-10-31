# ECE231L Homework Week 11

## Overview

For this assignment I have given you code for the Set class. Copy this class to Map.h and modify it
to implement the std::map interface. Compare the run time of your Set class with the built in
std::set class when loading the `numbers` file, and searching for all values in the `search` file.

## Map

  1. Add a template parameter for the Value type.
  1. Add a Value member to the btnode class.
  1. Implement operator[] for Map.
  1. Implement at() for Map.
  1. Unit tests.
    
## Timings

Use `Timer.h` to make the following measurements:

  1. Time to load `numbers` into std::set.
  1. Time to load `numbers` into Set.
  1. Time to lookup all values in `search` file using std::set.
  1. Time to lookup all values in `search` file using Set.
    
## Coverage report

Install lcov with the command `sudo apt install lcov`

  1. Compile with --coverage
  1. Run `make coverage`
  1. make sure all executable lines are tested in Set.h and Map.h
  1. add out directory to your repository so I can see the coverage report.
    
