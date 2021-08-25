#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

 	int equipeA[4];
 	int equipeB[4];

 	cin >> equipeA[0] >> equipeA[1] >> equipeA[2]; 
 	cin >> equipeB[0] >> equipeB[1] >> equipeB[2]; 


 	for (int i = 0; i < 3; ++i)
 	{
 		if(equipeA[i] > equipeB[i]){
 			cout << "A\n";
 			return 0;
 		}
 		else if(equipeA[i] < equipeB[i]){
 			cout << "B\n";
 			return 0;
 		}
 	}	

 	return 0;
}