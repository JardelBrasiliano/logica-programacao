#include<bits/stdc++.h>
#include<string>

using namespace std;

void solve() {
  int n;cin >> n;
  int senha[n];
  for(int i = 0; i < n; i++) {
    cin >> senha[i];
  }

  for(int i = 0; i < n; i++) {
    int incial = senha[i];
    int quant;cin >> quant;

    int value = 0;
    for(int j = 0; j < quant; j++) {
      char ori;cin >> ori;
      
      if(ori == 'D') value++;
      if(ori == 'U') value--;
    }
    int curretvalue = incial + value;

    if(curretvalue >= 0 && curretvalue <= 9){
      cout << curretvalue << " ";
    }

    if(curretvalue > 9) {
      cout << curretvalue - 10 << " ";
    }

    if(curretvalue < 0) {
      cout << curretvalue + 10 << " ";
    }
  }
  cout << "\n";
  return;
}

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
  // solve();

  return 0;
}