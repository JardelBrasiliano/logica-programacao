# Vector
lib: #include <vector> 

## Basic
~~~c++
#include <vector> //Biblioteca para usar o vector

using namespace std;

int main(){
	vector<int> V; //Criação do variável vector

	V.push_back(10); //Adiciono o elemento 10 no final do vector V

	for(int i=0;i<(int)V.size();i++){ //Passo por cada elemento do vector V
		cout<<V[i]<<"\n"; //Imprimir cada elemento do vector V
	}
}
~~~
## Methods

### resize
Modifica o tamanho do vector para um tamanho desejado, caso o tamanho seja maior que o atual os elementos adicionais serão elementos nulos (zero no caso de inteiros, por exemplo). 
~~~c++
// {10, 7, 21}
V.resize(10); //Muda o tamanho do vector V para 10.
// {10, 7, 21, 0, 0, 0, 0, 0, 0, 0}
~~~
### pop_back
Deleta o ultimo elemento do vector
~~~c++
// {10, 7, 21}
V.pop_back(); //Apaga o ultimo elemento do vector V.
// {10, 7}
~~~
### clear
~~~c++
V.clear(); //Remove todos os elementos do vector V.
~~~
### Ordendar um vector usando sort
~~~c++
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	vector<int> V;
	V = {5, 10, 2, 4};

	sort(V.begin(), V.end()); //Ordena todo o vector V, deixando os elementos na seguinte ordem {2, 4, 5, 10}.
}
~~~

# Pair

Basic
~~~c++
#include <iostream>

using namespace std;

int main(){
	pair<string, int> P; //Cria uma variável pair

	cin>>P.first>>P.second; //Lê um valor do tipo string e armazena na primeira posição do pair e um valor do tipo int para a segunda posição.
}
~~~

Mas o principal motivo é porque pair possui operador de desigualdade implementado, isso quer dizer que podemos comparar dois pair usando operadores de comparação.
É importante notar, que caso houvesse empate pela primeira variável, o desempate aconteceria usando a segunda variável, ou seja, se B.first fosse 10, Ana seria a melhor, pois "Ana" < "Joao" usando o comparador de string.
~~~c++
#include <iostream>

using namespace std;

int main(){
	pair<int, string> A;
	pair<int, string> B;

	A.first = 10;
	A.second = "Joao";

	B.first = 5;
	B.second = "Ana";

	if(A > B){
		cout<<A.second<<" eh melhor\n";
	}else{
		cout<<B.second<<" eh melhor\n";
	}
}
~~~

O comparador de pair também nos permite ordenar um vetor de pair facilmente:
~~~c++
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	vector< pair<int, string> > V;
	pair<int, string> tmp;
	
	for(int i=1;i<10;i++){	
		cin>>tmp.first>>tmp.second; //Leio os valores da entrada e armazeno em um pair temporário
		V.push_back(tmp); //Adiciono o pair no vetor
	}
	sort(V.begin(), V.end()); //Ordena o vetor utilizando o comparador de desigualdade do pair, ou seja, primeiro compara pelo first e em caso de empate compara pelo second.
}
~~~
A última coisa que aprenderemos de pair será o uso da função make_pair. A função make_pair retorna um pair com os tipos das variáveis passadas como parâmetros, ou seja, se você usar make_pair("Joao", 10) a função retornará um pair<string, int> com os first igual a "Joao" e o second igual a 10.
~~~c++
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	vector< pair<int, string> > V;
	int a;
	string b;

	for(int i=1;i<10;i++){	
		cin>>a>>b; //Leio os valores da entrada e armazeno nas variáveis a e b
		V.push_back(make_pair(a,b)); //Adiciono o pair no vetor utilizando make_pair
	}

	sort(V.begin(), V.end()); //Ordena o vetor utilizando o comparador de desigualdade do pair, ou seja, primeiro compara pelo first e em caso de empate compara pelo second.
}
~~~

# Queue

Queue representa uma fila, exatamente como estamos acostumados. As principais operações de uma fila são, adicionar alguém ao fim da fila e consultar (ou remover) o elemento que está na frente da fila.

~~~c++ 
#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<int> V;

	V.push_back(1);
	V.push_back(4);
	V.push_back(6);
	V.push_back(2);

	//Operação 1 - Adicionar um elemento ao final do vetor
	V.push_back(8);

	//Operação 2 - Remover o primeiro elemento do vetor
	for(int i=0;i<(int)V.size()-1;i++){
		V[i] = V[i+1];
	}
	V.pop_back();

	return 0;
}
~~~

OBS: Sempre que precisarmos deletar o primeiro elemento várias vezes, usaremos uma queue, sempre que precisarmos acessar um elemento diferente do primeiro várias vezes, usaremos um vector.

Exemplo: 
~~~c++
#include <iostream>
#include <queue>

using namespace std;

int main(){

	queue<int> fila;
	int op;
	int id;

	while(cin>>op){ //Vamos ler cada operação
		if(op == 0){
			break; //Se operação for 0, o caixa do supermercado quebrou.
		}		

		if(op == 1){ //Alguém chega na fila
			cin>>id; //Lemos o id da pessoa que chegou e colocamos na fila.
			fila.push(id);
		}else if(op == 2){ //O caixa vai atender alguém da fila
			if(fila.empty() == false){ //Se a fila não for vazia, ou seja, tiver alguém na fila
				fila.pop(); //O caixa atende a pessoa na frente da fila, e deletamos essa pessoa da fila.
			}

		}
	}

	//Após o caixa quebrar queremos saber as pessoas que ainda estão na fila.
	while(fila.empty() == false){ //Enquanto a fila não for vazia
		int p = fila.front(); //Pego a pessoa na frente da fila e imprimo
		cout<<p<<" ";

		fila.pop(); //Removo a pessoa que está na frente da fila.
	}

	return 0;
}
~~~

# Stack
lib: #include <stack> 

metodos: Adicionar algo ao topo da pilha, olhar o objeto que está no topo da pilha e remover o objeto no topo da pilha.

## Basic
~~~~c++
#include <iostream>
#include <stack>

using namespace std;

int main(){

	int op;
	int x;
	stack<int> pilha; //Cria uma variável stack que armazena inteiros

	while(cin>>op){
		if(op == 0){ //Operação de finalizar o programa
			break; //Encerra o while
		}

		if(op == 1){ //Adicionar elemento na pilha
			cin>>x;
			pilha.push(x); //Adiciona o elemento x no topo da pilha
		}else if(op == 2){
			if(!pilha.empty()){ //Se a pilha não estiver vazia
				pilha.pop(); //Remove elemento do topo da pilha
			}
		}else if(op == 3){
			if(pilha.empty()){
				cout<<"-1\n";
			}else{
				cout<<pilha.top()<<"\n";
			}
		}


	}

	return 0;
}
~~~