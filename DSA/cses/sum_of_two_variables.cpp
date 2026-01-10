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

  int n, x;
  cin >> n >> x;

  vector<pair<int, int>> nums(n);

  for (int i = 0; i < n; i++) {
    cin >> nums[i].first;
    nums[i].second = i + 1;
  }

  sort(nums.begin(), nums.end());
  int left = 0;
  int right = n - 1;

  while (left < right) {
    int sum = (nums[left].first + nums[right].first);
    if (x == sum) {
      cout << nums[left].second << " " << nums[right].second << endl;
      return 0;
    } else if (sum < x) {
      left++;
    } else {
      right--;
    }
  }
  cout << "IMPOSSIBLE" << endl;

#ifdef ONPC
  cerr << endl
       << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
#endif
}
