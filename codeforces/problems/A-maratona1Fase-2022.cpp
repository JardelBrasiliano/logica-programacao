#include<bits/stdc++.h>
#include<string>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  int n;cin >> n;
  string s;cin >> s;

  int aux = 0;
  for(int i = 0; i < n; i++) {
    char atual = s[i];

    if(atual == 'a') {
      if (i == 0 ) {
        if (s[i+1] == 'a') {
          aux++;
        }
      } else {
        if ( i != n-1) {
          if (s[i+1] == 'a') {
            aux++;
          } else if (s[i-1] == 'a') {
            aux++;
          }
        } else {
          if (s[i-1] == 'a') {
            aux++;
          }
        }
      }
    }
  }
  cout << aux << endl;
	return 0;
}