#include <iostream>
#include <string>

#include "app.h"




int main(int argc, char** argv) {
	// argc - count of input arguments
	// argv - vector with arguments values

	//inargument sort
	try {
		if (argc > 1) {
			for (int i = 1; i < argc; i++) {
				/*switch (argv[i]) {
				case "-table" : // c++11 constexpr
					tableFlag++;
					break;
				case "-max":
					maxValue = std::stoi(argv[i + 1]);
				case "-level":
					levelFlag = std::stoi(argv[i + 1]);
				default: // for general purpose
					continue;

				}*/ // const char is not supported in switchcase
				std::string dummy{ argv[i] };
				if (dummy == "-table") {
					tableFlag = 'A';
					break;
				}
				else if (dummy == "-max") {
					//std::string dummy2{ argv[i+1] };
					maxValue = std::stoi(argv[i + 1]);
				}
				else if (dummy == "-level") {
					//std::string dummy2{ argv[i + 1] };
					levelFlag = std::stoi(argv[i + 1]);
				}
				else {
					continue;
				}
			}
		}
		if ((maxValue > 0) && (levelFlag > 0)){
			std::cout << "Entering both maximum value and level is prohibited\n";
			//return 1;
		}
		if ((maxValue < 0) || (levelFlag < 0)) {
			std::cout << "Entered value is lower than 0\n";
			//return 1;
		}
	}
	catch (std::invalid_argument const& exc) {// catch string parsing error
		std::cout << "Entered value is incorrect\n";
		std::cout << exc.what() << "\n";
		//return 1;
	}

	std::cout << "table " << tableFlag << " max " << maxValue << " level " << levelFlag;
}