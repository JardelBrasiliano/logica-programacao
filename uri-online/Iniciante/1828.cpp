// Bazinga!
// https://www.beecrowd.com.br/judge/pt/runs/code/31471134

#include <bits/stdc++.h>
#include <string>

using namespace std;

string result()
{
  string sh, raj;
  cin >> sh >> raj;

  if (sh == raj)
  {
    return "De novo!";
  }

  if (
      (sh == "tesoura" && raj == "papel") ||
      (sh == "papel" && raj == "pedra") ||
      (sh == "pedra" && raj == "lagarto") ||
      (sh == "lagarto" && raj == "Spock") ||
      (sh == "Spock" && raj == "tesoura") ||
      (sh == "tesoura" && raj == "lagarto") ||
      (sh == "lagarto" && raj == "papel") ||
      (sh == "papel" && raj == "Spock") ||
      (sh == "Spock" && raj == "pedra") ||
      (sh == "pedra" && raj == "tesoura"))
  {
    return "Bazinga!";
  }

  return "Raj trapaceou!";
};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    cout << "Caso #" << i << ": " << result() << endl;
  }

  return 0;
}