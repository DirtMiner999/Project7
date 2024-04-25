#include "Converter.h"


int main() {
	std::cout << Converter("RUB", 1, "YEN") << "\n";

   
	std::cout << Converter("RUB", 92.29, "DOLLAR") << "\n";

	std::cout << Converter("DOLLAR", 1, "YEN") << "\n";

   std::cout << Converter("GMB", 12, "RUB");
}
