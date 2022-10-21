// Várias Notas Com Validação
// https://www.beecrowd.com.br/judge/pt/problems/view/1118

#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  double notas[2];

  int controllNota = 0;
  bool keyOpen = true;

  while (keyOpen)
  {
    double notaAtual;
    cin >> notaAtual;

    if (notaAtual >= 0 && notaAtual <= 10)
    {
      notas[controllNota++] = notaAtual;

      if (controllNota == 2)
      {
        cout << fixed << setprecision(2);
        cout << "media = " << (notas[0] + notas[1]) / 2 << endl;

        int t = 0;
        while (!(t == 1 || t == 2))
        {
          cout << "novo calculo (1-sim 2-nao)\n";
          cin >> t;
        }
        controllNota = 0;
        if (t == 2)
        {
          return 0;
        }
      }
    }
    else
    {
      cout << "nota invalida\n";
    }
  }

  return 0;
}