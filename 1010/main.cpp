#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int code1, n1;
  cin >> code1 >> n1;
  double value1;
  cin >> value1;

  int code2, n2;
  cin >> code2 >> n2;
  double value2;
  cin >> value2;

  printf("VALOR A PAGAR: R$ %.2lf\n", (n1*value1 + n2*value2));

  return 0;
}
