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

// function to convert integer to n-bit binary string
string toBinary(int x, int n) {
  string s;
  for (int i = n - 1; i >= 0; i--) {
    s.push_back((x & (1 << i)) ? '1' : '0');
  }
  return s;
}

vector<string> grayCode(int n) {
  int size = 1 << n; // total grayCode 2^n
  vector<string> result;

  for (int i = 0; i < size; i++) {
    int g = i ^ (i >> 1);
    result.push_back(toBinary(g, n));
  }

  return result;
}

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  // Input of the integer
  int n;
  cin >> n;

  vector<string> res = grayCode(n);

  for (auto x : res) {
    cout << x << endl;
  }

#ifdef onpc
  cerr << endl
       << "finished in " << clock() * 1.0 / clocks_per_sec << " sec" << endl;
#endif
}
