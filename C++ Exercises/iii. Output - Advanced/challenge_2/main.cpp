// Output Exercise 1

#include <iostream>

int f(unsigned char x) {
	x ^= x >> 4;
	x &= 0xf;
	return (0x6996 >> x) & 1;
}

int main(int argc, const char * argv[]) {
	unsigned int x;
	std::cin >> x;
	std::cout << f(x) << std::endl;
}