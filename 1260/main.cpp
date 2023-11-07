#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  map<string, double> trees;
  map<string, double>::iterator it;

  cout << fixed << setprecision(4);

  string tree;
  int n, total = 0;

  cin >> n;
  cin.get();
  getline(cin, tree);

  for (int i = 1; i <= n; i++) {
    while (getline(cin, tree) && tree[0] != '\0') {
      trees[tree]++;
      total += 1;
    }

    if (i > 1) {
      cout << '\n';
    }

    for (it = trees.begin(); it != trees.end(); it++) {
      cout << it->first << ' ' << 100*(it->second)/total << '\n';
    }

    total = 0;
    trees.clear();
  }

  return 0;
}
