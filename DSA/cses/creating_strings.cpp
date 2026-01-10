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

vector<string> result;

int fact(int n) {
  if (n <= 1)
    return 1;
  return n * fact(n - 1);
}

int getCount(string ss) {
  multiset<char> st;
  set<char> set_1;

  int s = ss.size();
  int deno = 1;

  for (auto x : ss) {
    st.insert(x);
    set_1.insert(x);
  }

  for (auto x : set_1) {
    int cnt = st.count(x);
    if (cnt > 1) {
      deno *= fact(cnt);
    }
  }

  return (fact(s)) / deno;
}

void generatePerm(string &s) {
  sort(s.begin(), s.end());
  do {
    result.push_back(s);
  } while (next_permutation(s.begin(), s.end()));

  for (auto x : result) {
    cout << x << endl;
  }

  return;
}

void permute(string s, int l, int r) {
  if (l == r) {
    cout << s << endl;
  } else {
    for (int i = l; i <= r; i++) {
      swap(s[l], s[i]);     // Choose
      permute(s, l + 1, r); // Explore
      swap(s[l], s[i]);     // Backtrack (Un-choose)
    }
  }
}

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;

  cin >> s;

  // cout << "The number of possible strings" << endl;
  cout << getCount(s) << endl;

  // cout << "The possible permutations " << endl;
  generatePerm(s);

  return 0;
}
