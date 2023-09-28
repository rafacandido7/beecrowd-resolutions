#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string name;
  cin >> name;

  double base, total;
  cin >> base >> total;

  printf("TOTAL = R$ %.2lf\n", (base+0.15*total));

  return 0;
}
