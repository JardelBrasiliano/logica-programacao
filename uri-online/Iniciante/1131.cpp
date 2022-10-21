// Grenais
// https://www.beecrowd.com.br/judge/pt/problems/view/1131

#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int gremio = 0, inter = 0, emapates = 0;
  int a, b;
  int pergunta = 1;

  cin >> a >> b;
  if (a > b)
  {
    inter++;
  }
  else if (b > a)
  {
    gremio++;
  }
  else
  {
    emapates++;
  }
  cout << "Novo grenal (1-sim 2-nao)\n";

  while (cin >> pergunta && pergunta == 1)
  {
    cin >> a >> b;

    if (a > b)
    {
      inter++;
    }
    else if (b > a)
    {
      gremio++;
    }
    else
    {
      emapates++;
    }
    cout << "Novo grenal (1-sim 2-nao)\n";
  }

  cout << gremio + inter + emapates << " grenais\n";
  cout << "Inter:" << inter << endl;
  cout << "Gremio:" << gremio << endl;
  cout << "Empates:" << emapates << endl;

  if (gremio > inter)
  {
    cout << "Gremio venceu mais\n";
    return 0;
  }
  else if (inter > gremio)
  {
    cout << "Inter venceu mais\n";
    return 0;
  }
  else
  {
    cout << "Nao houve vencedor\n";
  }
  return 0;
}