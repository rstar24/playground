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

  multiset<char> st;

  for (int i = 122; i >= 97; i--) {
    st.insert((char)i);
  }
  st.insert('a');

  for (int i = 122; i >= 97; i--) {
    st.insert((char)i);
  }

  for (auto x : st) {
    cout << x << " " << st.count(x) << endl;
  }

#ifdef ONPC
  cerr << endl
       << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
#endif
}
