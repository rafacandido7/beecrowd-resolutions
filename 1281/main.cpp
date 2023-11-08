#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, avaliableProducts, requiredProducts;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> avaliableProducts;

    map<string, double> p;

    for (int j = 0; j < avaliableProducts; j++) {
      string name;
      double price;
      cin >> name >> price;
      p.insert({name, price});
    }

    cin >> requiredProducts;

    double total = 0;

    for (int j = 0; j < requiredProducts; j++) {
      string name;
      int quantity;
      cin >> name >> quantity;

      auto ax = p.find(name);

      total = total + ax->second * quantity;
    }

    cout << fixed << setprecision(2);
    cout << "R$ " << total << "\n";
  }

  return 0;
}
