#include <bits/stdc++.h>

int main(int argc, char *argv[]) {
  using namespace std;
  vector<int> v = {90,80};
  // vector<int> v(10, 5);
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);

  // cout << v[0] << endl;
  // cout << v[1] << endl;
  // cout << v[2] << endl;

  // for(int i = 0; i < v.size(); ++i) {
  //   cout << v[i] << endl;
  // }

  for (auto x : v) {
    cout << x << endl;
  }

  cout << v.front() << "..." << v.back() << endl;
  
  v.pop_back();
  cout << v.front() << "..." << v.back() << endl;

  // Sort the vector
  sort(v.begin(), v.end());
  cout << v.front() << "..." << v.back() << endl;

  return 0;
}