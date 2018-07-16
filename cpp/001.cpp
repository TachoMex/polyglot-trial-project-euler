#include <iostream>
using std::cout;
using std::endl;

const int N = 1000;

int main(void) {
  int sum = 0;
  for (int i = 1; i < N; ++i) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }
  cout << sum << endl;
  return 0;
}
