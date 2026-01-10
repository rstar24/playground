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

int solve(vector<int> arr) {

  ll n = arr.size();
  vector<ll> sums;

  if (n == 1)
    return arr[0];

  for (int z = 1; z < n; z++) {
    // made the bitmask
    vector<bool> mask(z, 0);
    for (int k = 0; k < (n - z); k++)
      mask.push_back(1);

    ll sum_p1 = 0;
    ll sum_p2 = 0;
    do {
      for (int j = 0; j < n; j++) {
        if (mask[j] == 1) {
          sum_p1 += arr[j];
        } else {
          sum_p2 += arr[j];
        }
      }
      sums.push_back(abs(sum_p1 - sum_p2));
      sum_p1 = 0;
      sum_p2 = 0;
    } while (next_permutation(mask.begin(), mask.end()));
  }

  auto res = min_element(sums.begin(), sums.end());

  return *res;
}

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int TET = 1e9;
  // cin >> TET;

  int n;
  cin >> n;
  vector<int> arr;

  // Process the input
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    arr.push_back(x);
  }

  // solution
  // cout << "Solved easily " << endl;

  cout << solve(arr) << endl;

  //

#ifdef ONPC
  cerr << endl
       << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
#endif
}
