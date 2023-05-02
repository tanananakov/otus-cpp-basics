#include <iostream>
#include <string>

#include "app.h"




int main(int argc, char  **argv)
	// argc - count of input arguments
	// argv - vector with arguments values

	//inargument sort
	try {
		if (argc > 1) {
			for (unsigned int i = 1, i < argc, i++) {
				switch (argv[i]) {
				case "-table": // c++11 constexpr

				case "-max":

				case "-level":

				default:
					continue;

				}
			}
		}
		else { //default
			unsigned char tableFlag = 0;
			unsigned int maxValue = 100;
			unsigned int levelFlag = 0;
		}
	}catch () {

	}