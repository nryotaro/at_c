#ifdef _LOCAL
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

string solve(int x, int y) { return abs(x - y) < 3 ? "Yes" : "No"; }

#ifndef _LOCAL
int main() {
    int x, y;
    cin >> x >> y;
    cout << solve(x, y) << endl;
    return 0;
}
#endif