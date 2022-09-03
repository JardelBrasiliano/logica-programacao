#include<bits/stdc++.h>
#include<string>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  string s;
  char c;

  cin>>s>>c;

  int aux = 0;
  for(int i = 0; i < s.length(); i++){
    if(s[i] == c) aux++;
  }
  
  cout << aux << endl;
	return 0;
}