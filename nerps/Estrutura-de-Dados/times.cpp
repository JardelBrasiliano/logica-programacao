// https://neps.academy/br/course/estruturas-de-dados-(codcad)/lesson/times
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 

  int N, T;
	vector< pair<int, string> > v;
	vector< string > times[1005];
	cin>>N>>T;

	for (int i = 0; i< N;i++) {
		string nome;
		int hab;
		cin>>nome>>hab;
		v.push_back( make_pair(hab, nome) );
	}
	sort( v.begin(), v.end());

	int qual = 1;
	for(int i = v.size() - 1; i >= 0; i--) {
		times[qual].push_back( v[i].second );
		qual++;
		if(qual > T) qual = 1;
	}

	for(int i = 1; i <= T; i++) {
		cout << "Time " << i << endl;
		sort(times[i].begin(), times[i].end());
		for(int j = 0; j < times[i].size(); j++) {
			cout << times[i][j] << endl;
		}
		cout << endl;
	}

  return 0;
}
