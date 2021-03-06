#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <utility>
#include <queue>
#include <set>
#include <map>

using namespace std;

pair<int, int> get_key(int a, int b) {
  if(a > b)
    return make_pair(b, a);
  return make_pair(a, b);
}

vector<int> coloring_edges_on_tree(int n, vector<int> a, vector<int> b) {
  vector<vector<int>> graph(n);
  for(int i=0;i<a.size();i++) {    
    int vertex_a = a[i] - 1;
    int vertex_b = b[i] - 1;
    graph[vertex_a].emplace_back(vertex_b);
    graph[vertex_b].emplace_back(vertex_a);
  }
  
  int color_num = 0;  
  queue<int> que;
  map<pair<int, int>, int> mp;

  int used[100000] = {};
  que.push(0);
  vector<int> ans;  
  while(!que.empty()) {
    int vertex = que.front();
    que.pop();    
    vector<int> vertex_vec = graph[vertex];
    int degree = vertex_vec.size();
    color_num = color_num > degree ? color_num : degree;
    set<int> colors;
    int color_index = 1;
    for(int j=0;j<vertex_vec.size();j++) {
      int vertex2 = vertex_vec[j];
      if(used[vertex2] == 1)
	colors.insert(mp[get_key(vertex, vertex2)]);
    }
    for(int i=0;i<vertex_vec.size();i++) {
      int vertex2 = vertex_vec[i];
      if(used[vertex2] == 1)
	continue;

      que.push(vertex2);
      
      pair<int, int> key = get_key(vertex, vertex2);

      while(true) {
	if(colors.count(color_index) == 1) {
	  color_index++;
	  continue;
	} else {
	  break;
	}
      }
      mp[key] = color_index++; 
    }
    used[vertex] = 1;
  }
  ans.push_back(color_num);
  for(int i = 0; i< a.size();i++) {
    ans.push_back(mp[get_key(a[i]-1, b[i]-1)]);
  }
  return ans;
}

/**
int main() {
  int n;
  cin >> n;
  vector<int> a;
  vector<int> b;
  for(int i=0;i<n-1;i++) {
    int temp;
    cin >> temp;
    a.push_back(temp);
    cin >> temp;
    b.push_back(temp);
  }
  vector<int> ans = coloring_edges_on_tree(n, a, b);
  for(int i=0;i<ans.size();i++) {
    cout << ans[i];
    if(ans.size() - 1 != i)
      cout << endl;
  }
}
**/
