#include <iostream>
#include "DoIt.hpp"

int main(int argc, char *argv[]) {
	if (argc > 1) {
		return 1;
	}
	do_it(3, 7);
	return 0;
}