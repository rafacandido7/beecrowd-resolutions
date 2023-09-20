#include <bits/stdc++.h>

using namespace std;

bool verificaPrimo (int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  int peso;
  int nPrimos = 0;
  int somaPrimo = 0;

  cin >> peso;

  for (int i = peso; nPrimos < 10; i++) {
    if (verificaPrimo(i)) {
      somaPrimo += i;
      nPrimos++;
    }
  }

  int horas = 60000000 / somaPrimo;

  int dias = horas/24;

  printf("%d km/h\n", somaPrimo);
  printf("%d h / %d d\n", horas, dias);

  return 0;
}
