.PHONY: run
run: solve ../input
	./solve <../input

solve: solve.cpp
	$(CXX) -Wall -Wextra -pedantic -Werror -g -Og -o $@ $^
