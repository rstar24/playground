#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define char unsigned char

using namespace std;
// mt19937 rnd(239);
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());

typedef long long ll;
typedef long double ld;

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int TET = 1e9;

  int n;
  cin >> n;

  // pos[v] stores the index (0 to n-1) where value 'v' is located
  vector<int> pos(n + 1);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    pos[x] = i;
  }

  int rounds = 1; // You always need at least one round
  for (int i = 1; i < n; i++) {
    // If the next number appears earlier in the array than the current one
    if (pos[i + 1] < pos[i]) {
      rounds++;
    }
  }

  cout << rounds << endl;
#ifdef ONPC
  cerr << endl
       << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
#endif
}
