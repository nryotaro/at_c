#ifdef _LOCAL
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll solve(ll n, ll k) {
    ll res = k;
    for(ll i = 1ll; i < n; i++) {
        res *= k - 1ll;
    }
    return res;
}

#ifndef _LOCAL
int main() {
    ll n, k;
    cin >> n >> k;
    cout << solve(n, k) << endl;
}
#endif