#ifdef _LOCAL
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

#ifndef _LOCAL
int main() {
    ll h, n;
    cin >> h >> n;
    for(int i = 0; i < n; i++) {
        ll temp;
        cin >> temp;
        h -= temp;
    }
    if(h <= 0)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
#endif