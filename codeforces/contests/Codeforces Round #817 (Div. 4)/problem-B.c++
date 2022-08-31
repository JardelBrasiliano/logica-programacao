#include<bits/stdc++.h>
#include<string>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

  int t;
  cin>>t;

  for(int j=0;j<t;j++) {
    int n;
    string primeira;
    string segunda;

    bool iguais = false;

    cin >> n;
    cin >> primeira;
    cin >> segunda;

    for (int i = 0; i<n; i++) {
      
      if(char(primeira[i]) == char(segunda[i])) {
        iguais = true;
      } else if(char(primeira[i]) == 'G' && char(segunda[i]) == 'B') {
        iguais = true;
      } else if(char(primeira[i]) == 'B' && char(segunda[i]) == 'G') {
        iguais = true;
      } else {
        iguais = false;
        break;
      }
    }

    if(iguais) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}