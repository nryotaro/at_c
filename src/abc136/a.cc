#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#ifndef _LOCAL
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(0, c - (a - b)) << endl;
    return 0;
}
#endif