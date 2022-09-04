// https://codingcompetitions.withgoogle.com/kickstart/round/00000000008f4332/0000000000941ec5
#include<bits/stdc++.h>
using namespace std;

char vogais[10] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};

bool verificaSeExiste(char a) {
  for (int i = 0; i < 10; i++)
    if (vogais[i] == a) return true;
  return false;
}

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  int T, cont = 0;
  cin >> T;
  for (int tc = 1; tc <= T; tc++) {
    string entrada;cin >> entrada;
    
    char ultimaLetra = entrada.back();
    if(ultimaLetra == 'y' || ultimaLetra == 'Y') {
      cout << "Case #" << tc << ": " << entrada << " is ruled by nobody." << endl;
    } else if (verificaSeExiste(ultimaLetra)) {
      cout << "Case #" << tc << ": " << entrada << " is ruled by Alice." << endl;
    } else {  
      cout << "Case #" << tc << ": " << entrada << " is ruled by Bob." << endl;
    }
  }
	return 0;
}
