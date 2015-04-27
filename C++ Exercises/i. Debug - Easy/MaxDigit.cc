int maxDigit(int n) {
  int result = 0;
  while (n >= 0) {
    result = std::max(result, n % 10);    
    n /= 10;    
 }  
    return result;
}