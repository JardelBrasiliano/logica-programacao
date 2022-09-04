// https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb33e/00000000009e7021
#include<bits/stdc++.h>
#include<string>

using namespace std;

int solve() {
  string listI,p;cin>>listI>>p;

  int lengthI = listI.length();
  int lengthP = p.length();

  sort(listI.begin(), listI.end());
  sort(p.begin(), p.end());

  if(lengthI >= lengthP) {
    if(p == listI) return 0;
    return -1;
  }

  int auxCont = 0;
  for(int i = 0; i < lengthI; i++) {
    int indexChar = p.find(listI[i]);

    if(indexChar != string::npos){
      p[indexChar] = '0';
      listI[i] = '0';
    } else {
      return  -1;
    }
  }

  return lengthP - lengthI;
}

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  
  int n;cin>>n;

  for(int i = 1; i <= n; i++) {
    int resp = solve();

    cout << "Case #" << i << ": ";
    if(resp > -1) {
      cout << resp;
    } else {
      cout << "IMPOSSIBLE";
    }
    cout << endl;
  }
  

	return 0;
}
