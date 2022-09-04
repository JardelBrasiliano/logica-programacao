#include<bits/stdc++.h>         
#include <string.h> 
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int aux = 0, index1 = 0, index2 = 0;
	int T;cin >> T;
  string spell;

  for (int tc = 1; tc <= T; tc++) {
    cin >> spell;
		// cout << spell.size();
		string currentSpell, compareSpell;
		string newSpell1, newSpell2;
		for (int i = 1; i < spell.size(); i++) {
			currentSpell = {spell[i-1], spell[i]};

			for (int j = i+1; j < spell.size()-1; j++) {
				compareSpell = {spell[j], spell[j+1]};
				
				index1 = 0;
				while (currentSpell == compareSpell) {
					index1++;

					if (currentSpell == compareSpell) {
						newSpell1 = currentSpell;
						newSpell2 = compareSpell;
					}
					
					currentSpell.push_back(spell[i+index1]);
					compareSpell.push_back(spell[(j+1)+index1]);


					if ((currentSpell != compareSpell) || index1 >= spell.size()) {
						aux++;
						cout << aux << " <aux - currentSpell: " << newSpell1 << " compareSpell: " << newSpell2 << endl;
						break;
					}
					// if (aux == 2) break;
					// aux++;
				}
			}
		}

    // cout << "Case #" << tc << ": " << "R" << endl;
  }
  return 0;
}
