#include <iostream>
#include <string>

int main() {
	for (int i = 1; i <= 150; i++) std::cout << i << (0 == i % 3 || 3 == i % 10 ? "!" : "") << std::endl;
}
