.PHONY: run
run: solve
	./solve <input

solve: solve.cpp
	$(CXX) -Wall -Wextra -pedantic -Werror -std=c++23 -g -Og -o $@ $^
