// https://www.beecrowd.com.br/judge/pt/problems/view/1929
// regra de triângulo
// De forma matemática, sejam A, B e C os lados de um triângulo, então:

// A + B > C
// B + C > A
// A + C > B

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> stickes;
  int input;
  for (int i = 0; i < 4; i++)
  {
    cin >> input;
    stickes.push_back(input);
  }

  bool can = false;

  vector<vector<int>> groups = {{0, 1, 2}, {0, 1, 3}, {0, 2, 3}, {1, 2, 3}};

  for (auto &g : groups)
  {
    if (stickes[g[0]] < stickes[g[1]] + stickes[g[2]] &&
        stickes[g[1]] < stickes[g[0]] + stickes[g[2]] &&
        stickes[g[2]] < stickes[g[1]] + stickes[g[0]])
    {
      can = true;
      break;
    }
  }

  cout << (can ? "S" : "N") << endl;

  return 0;
}
