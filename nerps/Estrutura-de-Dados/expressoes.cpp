// https://neps.academy/br/course/estruturas-de-dados-(codcad)/lesson/expressoes
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){

	int A;cin>>A;

	do {
		int start = 0;
		int aL=0,aR=0, bL=0, bR=0, cL=0, cR=0;
		string name;
	  stack<char> pilha; 
		getline (cin,name);

		for(int i = 0; i < name.size(); i++) {
			pilha.push(name[i]);
		}

		while (!pilha.empty()) {
			start++;
			char currentChar = pilha.top();
			if(currentChar == '{') {
				aL++;
			} else if(currentChar == '}') {
				aR++;
			} else if(currentChar == '[') {
				bL++;
			} else if(currentChar == ']') {
				bR++;
			} else if(currentChar == '(') {
				cL++;
			} else if(currentChar == ')') {
				cR++;
			} 
			pilha.pop();	
		}

		if((aL-aR) == 0 && (bL-bR) == 0 && (cL-cR) == 0 && start > 0) {
			cout << "S\n";
		}else {?
			cout << "N\n";
		}
	} while(A--);

	return 0;
}