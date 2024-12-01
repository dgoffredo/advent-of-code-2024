.PHONY: run
run: solve
	./solve <input

solve: solve.cpp
	$(CXX) -Wall -Wextra -pedantic -Werror -g -Og -o $@ $^
