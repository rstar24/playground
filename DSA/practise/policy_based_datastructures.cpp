#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>  // For pb_ds structures
#include <ext/pb_ds/tree_policy.hpp>      // For tree-based policy data structures

using namespace std;
using namespace __gnu_pbds;  // Namespace for policy-based data structures

template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(8);
    s.insert(16);

    // Find by order: returns the iterator to the k-th largest element (0-based index)
    cout << *s.find_by_order(2) << endl; // 4 (3rd element)

    // Order of key: returns the number of elements strictly smaller than the given key
    cout << s.order_of_key(9) << endl;   // 4 (elements smaller than 9)

    return 0;
}
