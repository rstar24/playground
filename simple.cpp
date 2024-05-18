#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>> t;
	vector<int> v1;
	for(int i = 0 ; i < t*2; i++){
	    int x ;
	    cin >> x;
	    v1.push_back(x);
	}
    for( int i = 0 ; i < v1.size() ; i++){
        int j = i+1 ;
        int x = v1[i];
        int y = v1[j];

        if( y >= x) {
            cout << "0" <<endl;
        }

        else if ( x % (y*3) == 0 ) {
            cout << x / (y*3)<<endl;
        }

        else {
            cout<< (x / (y*3)) << endl;
        }

        i++;

    }

    
}

