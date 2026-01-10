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

int solve(vector<pair<ll, ll>> &vec) {
  vector<pair<ll, int>> t_set;

  for (auto x : vec) {
    t_set.push_back(make_pair(x.first, 1));
    t_set.push_back(make_pair(x.second, -1));
  }

  sort(t_set.begin(), t_set.end());

  int max_count = 0, curr = 0;

  for (auto x : t_set) {
    curr += x.second;
    max_count = max(max_count, curr);
  }

  return max_count;
}

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int TET = 1e9;

  ll n;
  cin >> n;
  vector<pair<ll, ll>> times;

  for (int i = 0; i < n; i++) {
    ll a, b;
    cin >> a >> b;
    times.push_back(make_pair(a, b));
  }

  cout << solve(times) << endl;

#ifdef ONPC
  cerr << endl
       << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
#endif
}
