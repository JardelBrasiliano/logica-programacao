#include<bits/stdc++.h>
#include<string>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  
	string risada;
	string s;

	cin>>risada;

	for(int i = 0; i < risada.length(); i++) {
		if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u') {
			s.push_back(risada[i]);
		}
	}

	for(int i = 0; i < s.length()/2; i++) {
		if(s[i] != s[(s.length()-1)-i]) {
			cout << "N\n";
			return 0;
		}
	}
	cout << "S\n";
}