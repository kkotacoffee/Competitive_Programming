long long int gcd(long long int x, long long int y) {
  if (y == 0) return x;
  return gcd(y, x%y);
}


int gcd(int x, int y) {
  return y ? gcd(y, x%y) : x;
}
