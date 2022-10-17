#include<bits/stdc++.h>
#include<string>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

  int n, t;
  string name;

  cin>>t;
  for (int j=0; j<t; j++) {
    
    cin>>n;
    cin>>name;

    bool nameT = false;
    bool nameI = false;
    bool nameM = false;
    bool nameU = false;
    bool nameR = false;
    
    for (int i = 0; i<n; i++) {
      char currentChar = char(name[i]);
      if(currentChar == 'T') nameT = true;
      if(currentChar == 'i') nameI = true;
      if(currentChar == 'm') nameM = true;
      if(currentChar == 'u') nameU = true;
      if(currentChar == 'r') nameR = true;
    }

    if(nameT && nameI && nameM && nameU && nameR && n==5) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}