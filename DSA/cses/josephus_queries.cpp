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

int circularDelete(int n, int k) {
  deque<int> nums;
  for (int i = 1; i <= n; i++) {
    nums.push_back(i);
  }

  int idx = 0; // start from first child
  int removed = 0;

  while (!nums.empty()) {
    idx = (idx + 1) % nums.size(); // every second child
    int val = nums[idx];
    nums.erase(nums.begin() + idx);
    removed++;

    if (removed == k)
      return val;
  }
  return -1; // unreachable
}

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<pair<int, int>> query;

  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    query.push_back(make_pair(a, b));
  }

  for (auto x : query) {

    cout << circularDelete(x.first, x.second) << endl;
  }

#ifdef ONPC
  cerr << endl
       << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
#endif
}
