#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int d[30][30];
int cm[500][500];

int solve(int n, int c) {
  vector<vector<int>> dest(3);
  for(int i=0;i<3;i++) {
    dest[i] = vector<int>(c, 0);
  }

  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
      dest[(i+1 + j+1) % 3][cm[i][j]-1] += 1;
    }
  }
  int res = numeric_limits<int>::max();
  for(int i=0;i<c-2;i++) {
    for(int j=i+1;j<c-1;j++) {
      for(int k=j+1;k<c;k++) {
	int cost = 0;
	for(int l=0;l<c;l++) {
	  cost += dest[0][l] * d[l][i];
	  cost += dest[1][l] * d[l][j];
	  cost += dest[2][l] * d[l][k];
	}
	res = min(cost, res);

	cost = 0;
	for(int l=0;l<c;l++) {
	  cost += dest[0][l] * d[l][i];
	  cost += dest[1][l] * d[l][k];
	  cost += dest[2][l] * d[l][j];
	}
	res = min(cost, res);

	cost = 0;
	for(int l=0;l<c;l++) {
	  cost += dest[0][l] * d[l][j];
	  cost += dest[1][l] * d[l][k];
	  cost += dest[2][l] * d[l][i];
	}
	res = min(cost, res);

	cost = 0;
	for(int l=0;l<c;l++) {
	  cost += dest[0][l] * d[l][j];
	  cost += dest[1][l] * d[l][i];
	  cost += dest[2][l] * d[l][k];
	}
	res = min(cost, res);

	cost = 0;
	for(int l=0;l<c;l++) {
	  cost += dest[0][l] * d[l][k];
	  cost += dest[1][l] * d[l][i];
	  cost += dest[2][l] * d[l][j];
	}
	res = min(cost, res);

	cost = 0;
	for(int l=0;l<c;l++) {
	  cost += dest[0][l] * d[l][k];
	  cost += dest[1][l] * d[l][j];
	  cost += dest[2][l] * d[l][i];
	}
	res = min(cost, res);
      }
    }
  }

  return res;
}
/*
int main() {
  int n, c;
  cin >> n >> c;
  for(int i=0;i<c;i++) {
    for(int j=0;j<c;j++) {
      cin >>  d[i][j];
    }
  }
  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
      cin >> cm[i][j];
    }
  }
  cout << solve(n, c);
}
*/
