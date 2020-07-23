#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;
typedef long long ll;

long long lamp(vector<vector<char>> area) {
  // split top bottom left right self
  int top[2000][2000] = {{0}};
  int bottom[2000][2000] = {{0}};
  int left[2000][2000] = {{0}};
  int right[2000][2000] = {{0}};
  int h = area.size();
  int w = area.at(0).size();

  int ans = 0;
  for(int i=0;i<h;i++) {
    for(int j=0;j<w;j++) {
      char point = area.at(i).at(j);
      if(point == '#') {
	top[i][j] = 0;
	left[i][j] = 0;
	continue;
      }
      top[i][j] = i == 0 ? 1 : (top[i-1][j] + 1);
      left[i][j] = j == 0 ? 1 : (left[i][j-1] + 1);
    }
  }
  for(int i=h-1;i>=0;i--) {
    for(int j=w-1;j>=0;j--) {
      char point = area.at(i).at(j);
      if(point == '#') {
	bottom[i][j] = 0;	
	right[i][j] = 0;
	continue;
      }
      bottom[i][j] = i == h-1 ? 1 : (bottom[i+1][j] + 1);
      right[i][j] = j == w-1 ? 1 : (right[i][j+1] + 1);

      ans = max(ans, top[i][j] + bottom[i][j] + left[i][j] + right[i][j] - 3);
    }
  }
  return ans;
}

/*
int main() {
  long long h, w;
  cin >> h;
  cin >> w;
  string s;
  getline(cin, s);
  
  vector<vector<char>> area(h);
  for(ll i=0;i<h;i++) {    
    getline(cin, s);
    vector<char> v(w);
    area[i] = v;
    cout << s;
    cout << endl;
    for(ll j=0;j<w;j++) {
      char ss = s[j];
      v[j] = ss;
    }
  }
  cout << lamp(area);
}
*/
