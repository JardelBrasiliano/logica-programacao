#include<bits/stdc++.h>
#include<string>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  string s;

  cin>>s;

  string vogais;
  string cons;

  for(int i = 0; i < s.length(); i++){
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') vogais.push_back(s[i]);
    else cons.push_back(s[i]);
  }
  
  cout << "Vogais: " << vogais << endl;
  cout << "Consoantes: " << cons << endl;

	return 0;
}