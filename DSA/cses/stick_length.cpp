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

  ll n;
  cin >> n;

  vector<ll> vec(n);
  for (ll i = 0; i < n; i++) {
    cin >> vec[i];
  }

  sort(vec.begin(), vec.end());

  ll med = vec[round(n / 2)];
  ll cost = 0;

  for (auto x : vec) {
    cost += abs(x - med);
  }

  cout << cost << endl;
#ifdef ONPC
  cerr << endl
       << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
#endif
}
