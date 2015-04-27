int increasingNumber(int X, int N) {
  for (int i = 1; i <= N; i++) {
    while (X % i != 0) {
      X += 1;
    }
  }
  return X;
}
