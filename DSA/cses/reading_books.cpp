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

  ll n;
  cin >> n;
  vector<ll> ts;
  ll sum_times = 0;
  ll max_time = 0;

  for (int i = 0; i < n; ++i) {
    ll t;
    cin >> t;
    sum_times += t;
    if (t > max_time) {
      max_time = t;
    }
  }

  ll res = max(sum_times, max_time * 2);

  cout << res << endl;

#ifdef ONPC
  cerr << endl
       << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
#endif
}
