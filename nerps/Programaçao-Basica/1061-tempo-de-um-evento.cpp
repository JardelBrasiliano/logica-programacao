// https://www.beecrowd.com.br/judge/pt/problems/view/1061

#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string passOnly;
  int dia1Int, hora1Int, min1Int, seg1Int;
  cin >> passOnly >> dia1Int >> hora1Int >> passOnly >> min1Int >> passOnly >> seg1Int;

  int dia2Int, hora2Int, min2Int, seg2Int;
  cin >> passOnly >> dia2Int >> hora2Int >> passOnly >> min2Int >> passOnly >> seg2Int;

  int umDiaEmSegundos = 24 * 60 * 60;
  int umaHoraEmSegundos = 60 * 60;
  int umMinEmSegundos = 60;

  int totalDia1 = (dia1Int * umDiaEmSegundos) + (hora1Int * umaHoraEmSegundos) + (min1Int * umMinEmSegundos) + seg1Int;
  int totalDia2 = (dia2Int * umDiaEmSegundos) + (hora2Int * umaHoraEmSegundos) + (min2Int * umMinEmSegundos) + seg2Int;

  int diferencaEmSegundo = totalDia2 - totalDia1;

  cout << diferencaEmSegundo / umDiaEmSegundos << " dia(s)\n";
  int restoHora = diferencaEmSegundo % umDiaEmSegundos;

  cout << restoHora / umaHoraEmSegundos << " hora(s)\n";
  int restoMinuto = restoHora % umaHoraEmSegundos;

  cout << restoMinuto / umMinEmSegundos << " minuto(s)\n";

  cout << restoMinuto % 60 << " segundo(s)\n";

  return 0;
}