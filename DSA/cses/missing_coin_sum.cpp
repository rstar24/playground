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

void makeCombinations(vector<int> &nums, vector<vector<int>> &cmbnt) {
  int n = sz(nums);

  sort(nums.begin(), nums.end());

  for (int i = 0; i < n; i++) {

    vector<bool> mask(n);
    fill(mask.end() - i, mask.end(), true);

    do {
      vector<int> temp;

      for (int j = 0; j < n; j++) {
        if (mask[j] == true) {
          temp.push_back(nums[j]);
        }
      }

      cmbnt.push_back(temp);

    } while (next_permutation(mask.begin(), mask.end()));
  }

  return;
}

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> nums(n);

  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  sort(nums.begin(), nums.end());

  ll smallest_missing = 1;

  for (int i = 0; i < n; i++) {

    if (nums[i] > smallest_missing) {
      break;
    }
    smallest_missing += nums[i];
  }

  cout << smallest_missing << endl;

#ifdef ONPC
  cerr << endl
       << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
#endif
}
