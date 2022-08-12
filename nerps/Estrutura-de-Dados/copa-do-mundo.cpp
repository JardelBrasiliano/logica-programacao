// https://neps.academy/br/course/estruturas-de-dados-(codcad)/lesson/copa-do-mundo
#include<bits/stdc++.h>
#include <queue>
#include <algorithm>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 

	queue<char> oitavas;
	queue<char> quartas;
	queue<char> semi;

  for(int i = 0; i < 30; i=i+2){
    int letraA = 'A';
    int L,R;cin>>L>>R;

    if(i < 16) {
      if(L>R){
        oitavas.push(char(letraA+i));
      }else{
        oitavas.push(char(letraA+i+1));
      }
    } else if(i < 24){
      char timeL = oitavas.front(); 
		  oitavas.pop(); 
      char timeR = oitavas.front(); 
		  oitavas.pop(); 

      if(L>R){
        quartas.push(timeL);
      }else{
        quartas.push(timeR);
      }
    } else if(i < 28){
      char timeL = quartas.front(); 
		  quartas.pop(); 
      char timeR = quartas.front(); 
		  quartas.pop(); 
      if(L>R){
        semi.push(timeL);
      }else{
        semi.push(timeR);
      }
    } else {
      char timeL = semi.front(); 
		  semi.pop(); 
      char timeR = semi.front(); 
		  semi.pop(); 

      if(L>R){
        cout << timeL << endl;
      }else{
        cout << timeR << endl;
      }
    }
  }

  return 0;
}
