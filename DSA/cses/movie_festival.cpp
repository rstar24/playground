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

struct Movie {
  int start;
  int end;
};

bool compareMovie(const Movie &a, const Movie &b) { return a.end < b.end; }

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;

  cin >> n;
  vector<Movie> movies(n);

  for (int i = 0; i < n; i++) {

    cin >> movies[i].start >> movies[i].end;
  }

  sort(movies.begin(), movies.end(), compareMovie);

  int count = 0;
  int curr_end_time = 0;

  for (int i = 0; i < n; i++) {
    if (movies[i].start >= curr_end_time) {
      count++;
      curr_end_time = movies[i].end;
    }
  }

  cout << count << endl;

#ifdef ONPC
  cerr << endl
       << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
#endif
}
