#include<bits/stdc++.h>
#include<string>

using namespace std;

int teste[3] = {4,2,1};

void solve() {
  int A, B;cin >> A >> B;

  int cont[4] = {0, 0, 0};

  for(int i = 0; i < 3; i++) {
    if (A-teste[i] >= 0) {
      cont[i]++;
      A = A-teste[i];
    }
    if (B-teste[i] >= 0) {
      cont[i]++;
      B = B-teste[i];
    }
  }

  int total = 0;

  if(cont[0] > 0) total += 4;
  if(cont[1] > 0) total += 2;
  if(cont[2] > 0) total += 1;

  cout << total << endl;
  return;
}

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

	// int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
  solve();

  return 0;
}