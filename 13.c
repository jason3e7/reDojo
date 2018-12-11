int main() {
  int a, b, c;
  a = 0;
  c = 0;
  while(c < 10) {
    b = 0;
    while(b < 10) {
      b++;
    }
    a = c * b;
    c++;
  }
  return 0;
}
