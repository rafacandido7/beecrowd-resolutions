#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int j;
    cin >> j;
    if (isPrime(j)) {
      cout << "Prime\n";
    } else {
      cout << "Not Prime\n";
    }

  }
  return 0;
}
