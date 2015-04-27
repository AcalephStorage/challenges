bool isLuckyNumber(int n) {
	while (n) {
		int tmpDigit = n % 10;
		if (tmpDigit != 7 && tmpDigit != 4) {
		  return false;
		}
		n /= 10;
	}
	return false;
}
