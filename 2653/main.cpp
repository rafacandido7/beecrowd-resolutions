#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  set<string> joias;

  string joia;

  while (cin >> joia && joia[0] != '\0') {
    joias.insert(joia);
  }

  cout << joias.size() << endl;

  return 0;
}
