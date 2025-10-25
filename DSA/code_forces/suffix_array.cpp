#include <bits/stdc++.h>
using namespace std;

vector<int> build_suffix_array(const string &s);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string inp;
    cin >> inp;

    vector<int> suffix_array = build_suffix_array(inp);

    for (int idx : suffix_array)
        cout << idx << " ";
    cout << endl;
    return 0;
}


vector<int> build_suffix_array(const string &s)
{
    string str = s + "$";
    int n = str.size();

    vector<int> p(n), c(n);

    // Initial Sorting by single characters ;
    vector<pair<char, int>> a(n);
    for (int i = 0; i < n; i++)
        a[i] = {str[i], i};
    sort(a.begin(), a.end());
    for(int i = 0 ; i < n ;i++) p[i] = a[i].second;

 

    c[p[0]] = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i].first == a[i - 1].first)
            c[p[i]] = c[p[i - 1]];
        else
            c[p[i]] = c[p[i - 1]] + 1;
    }

    // k rounds, log(n) steps
    int k = 0;
    vector<int> pn(n), cn(n);

    while ((1 << k) < n)
    {
        for (int i = 0; i < n; i++)
        {
            pn[i] = (p[i] - (1 << k) + n) % n;
        }

        // counting sort based on equivalence classes
        vector<int> cnt(n);
        for (int i = 0; i < n; i++)
            cnt[c[pn[i]]]++;
        for (int i = 1; i < n; i++)
            cnt[i] += cnt[i - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            p[--cnt[c[pn[i]]]] = pn[i];
        }

        // Recalculate equivalence classes
        cn[p[0]] = 0;
        for (int i = 1; i < n; i++)
        {
            pair<int, int> cur = {c[p[i]], c[(p[i] + (1 << k)) % n]};
            pair<int, int> prev = {c[p[i - 1]], c[(p[i - 1] + (1 << k)) % n]};

            if (cur == prev)
                cn[p[i]] = cn[p[i - 1]];
            else
                cn[p[i]] = cn[p[i - 1]] + 1;
        }

        c = cn;

        k++;
    }

    return p;
}