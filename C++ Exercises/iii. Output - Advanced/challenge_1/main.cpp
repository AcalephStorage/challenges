// Output Exercise 1

#include <iostream>

int f(unsigned char x) {
	x ^= x >> 4;
	x ^= x >> 2;
	x ^= x >> 1;
	return x & 1;
}

int main(int argc, const char * argv[]) {
	unsigned int x;
	std::cin >> x;
	std::cout << f(x) << std::endl;
}
