// https://codeforces.com/contest/1741/problem/A
#include<bits/stdc++.h>
using namespace std;

void solve() {
  string a, b;cin >> a >> b;

  char size_a = a[a.length()-1];
  int quan_X_a = a.length()-1;

  char size_b = b[b.length()-1];
  int quan_X_b = b.length()-1;

  if(size_a == size_b) {
    if(size_a == 'S') {
      if(quan_X_a > quan_X_b) {
        cout << "<\n";
        return;
      } else if(quan_X_a < quan_X_b) {
        cout << ">\n";
        return;
      } else {
        cout << "=\n";
        return;
      }
    }

    if(size_a == 'L') {
      if(quan_X_a > quan_X_b) {
        cout << ">\n";
        return;
      } else if(quan_X_a < quan_X_b) {
        cout << "<\n";
        return;
      } else {
        cout << "=\n";
        return;
      }
    }

    if(size_a == 'M') {
      cout << "=\n";
      return;
    }
  }

  if(size_a == 'S') {
    cout << "<\n";
    return;
  }
  
  if(size_a == 'L') {
    cout << ">\n";
    return;
  }

  if(size_b == 'S') {
    cout << ">\n";
    return;
  }

  if(size_b == 'L') {
    cout << "<\n";
    return;
  }
}
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  int tt;cin >> tt;
  for(int i = 0; i < tt; i++){solve();}
  
  // solve();

	return 0;
}