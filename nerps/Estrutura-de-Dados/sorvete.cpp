// https://neps.academy/br/course/estruturas-de-dados-(codcad)/lesson/sorvete
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 

  int P, S; cin >> P >> S;
	vector< pair<int, int> > v;
	vector< pair<int, int> > v_res;

  for(int i = 0; i < S; i++){
    int inicio, fim;
    cin >> inicio >> fim;
    v.push_back( make_pair(inicio, fim) );
  }
	sort( v.begin(), v.end());

  for(int i = 0; i < S; i++){
    int begin = v[i].first;
    int end = v[i].second;

    for(int j = i+1; j < S; j++){
      if( v[j].second != -1 && end >= v[j].first){
        if(end <= v[j].second ){
          end = v[j].second;
          v[i].second = end;
          v[j].second = -1;
        }
        if(end >= v[j].second ){
          v[j].second = -1;
        }

      }
    }
  }

  for(int i = 0; i < S; i++){
    if( v[i].second != -1 ){
      cout << v[i].first << " " << v[i].second << endl;
    }
  }
  return 0;
}
