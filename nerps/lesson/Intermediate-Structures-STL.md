# Set
Introdução: Esse tipo de árvore expande o conceito de uma árvore de busca binária e nos permite usar operações de busca, inserção e deleção em complexidade O(\log n)O(logn).obs: Estrutura set não adiciona elementos repetidos.

lib: #include <set> 

## Inserção, Buscar, Deletar e percorrer todo o set.

~~~c++
#include <set> //Biblioteca do set

using namespace std;

int main(){
  set<int> S; //Cria uma variável do tipo set para armazenar números inteiros

  S.insert(10); //Adiciona o elemento 10 no set
  S.insert(3); //Adiciona o elemento 3 no set
  
  if(S.find(3) != S.end()){ //Se 3 está no conjunto
    cout<<3<<"\n";
  }
  
  S.erase(10); //Apaga o elemento 10 do set

  
  for (set<int>::iterator it=S.begin(); it!=S.end(); ++it){
    cout << *it << " ";
  }
  cout<<"\n";
  // percorre de modo ordenado
}
~~~

outros metodos:
clear: Apaga todos os elementos.
size: Retorna a quantidade de elementos.
begin: Retorna um ponteiro para o inicio do set
end: Retorna um ponteiro para o final do set

# Map
Introdução: Funciona igual o Set, mas so que salva chave e valor.

## Inserção, Buscar, Deletar e percorrer todo o Map.
~~~c++
#include<iostream>
#include<map> //Biblioteca do map

using namespace std;

int main(){
  map<string, int> M; //Cria uma variável do tipo map que mapeia strings em int
  
  M.insert(make_pair("Alana", 10)); //Inserimos uma variável do tipo pair diretamente no map
  M["Alana"] = 10; //Relacionando o valor 10 à chave "Alana"

  if(M.find("Alana") != M.end()){ //Se a chave "Alana" foi inserida no map
    cout<<"Sim"<<"\n";
  }else{
    cout<<"Nao"<<"\n";
  }

  cout<<M["Alana"]<<"\n"; //Imprime o valor correspondente a chave "Alana", no cas, o valor 10.

  M.erase("Alana"); //Apaga o elemento que possui a chave "Alana" do map

  
  for (map<string,int>::iterator it=M.begin(); it!=M.end(); ++it){
    cout<< "("<< it->first<< ", "<< it->second<< ") ";
  }
  cout<<"\n";
}
~~~

# Priority Queue
No código acima, a entrada:

C Charmander 30
C Bubassauro 10
B
C Pikachu 5
C Squirtle 21
B
B
Imprime:

Charmander
Squirtle
Charmander
~~~c++
#include <iostream>
#include <queue>

using namespace std;

int main(){
    
    priority_queue< pair<int, string> > pokemon;

    char op;
    string nome;
    int poder;

    while(cin>>op){
        if(op == 'C'){ //Operação de Captura
            cin>>nome>>poder;
            pokemon.push(make_pair(poder, nome)); //Adiciono um pair na priority_queue, first = poder e second = nome
        }
        else if(op == 'B'){ //Operação de Batalha
            pair<int, string> tmp = pokemon.top(); //Pego o primeiro pokemon da fila
            pokemon.pop(); //Apago o primeiro pokemon da fila

            cout<<tmp.second<<"\n"; //Imprime o nome do pokemon selecionado para a batalha
            
            tmp.first /= 2; //Diminui o poder do pokemon selecionado
            pokemon.push(tmp); //Adiciona o pokemon novamente na fila
        }

    } 

    return 0;
}
~~~

# Union-Find
Intrudução: Tratar de problemas que envolvem união de conjuntos, onde unimos e checamos de maneira dinâmica.

~~~c++
// função find otimizada
int find(int x){
    
    // se x for o patriarca, retorne x
    if(pai[x]==x){
        return x;
    }
    
    // se não, retorne o valor do patriarca de seu pai
    return pai[x]=find(pai[x]); // mas lembre-se de salvá-lo em pai[x]
}
// função join otimizada que atualiza o tamanho dos conjuntos
void join(int x, int y){ // ela recebe os elementos a serem unidos
    
    // como só vamos unis os patriaarcas só precisamos trabalhar com eles
    // e fazemos caa um dos elementos receber o valor de sue patriarca
    x=find(x);
    y=find(y);
    
    // agora x e y são os patriarcas dos conjuntos que desejamos unir
    
    // se eles forem o mesmo patriarca
    if(x==y){
        return; // então os conjuntos já estão unidos e retornamos
    }
    
    // se o patriarca x tiver peso menor que o patriarca y
    if(peso[x]<peso[y]){    
         pai[x]=y; // faço x ser filho do y
         qtd[y]+=qtd[x]; // e atualizo o número de descendentes de y
    }
    
    // se o patriarca y tiver peso menor que o patriarca x
    if(peso[x]>peso[y]){
        
         pai[y]=x; // faço y ser filho de x
         qtd[x]+=qtd[y]; // e a tualizo o número de descendentes de x
    }
    
    // se os dois tiverem o mesmo peso
    if(peso[x]==peso[y]){
        
        // escolho um para ser o novo patriarca
        pai[x]=y;
        
        // e guardo que seu peso aumentará um uma unidade
        peso[y]++;
        
        // e atualizo o seu número de descendentes
        qtd[y]+=qtd[x];
    }
}
#include <iostream>
 
#define MAXN 100100

using namespace std;

// declaro as variáveis que vou precisar
int n, k, pai[MAXN], peso[MAXN];

// funções do Union-Find otimizadas
int find(int x){
    
    if(pai[x]==x){
        return x;
    }
    return pai[x]=find(pai[x]);
}
 
void join(int x, int y){
    
    x=find(x);
    y=find(y);
    
    if(x==y){
        return;
    }
    
    if(peso[x]<peso[y]){
        pai[x]=y;
    }
    if(peso[x]>peso[y]){
        pai[y]=x;
    }
    
    if(peso[x]==peso[y]){
        
        pai[x]=y;
        peso[y]++;
    }
}
// http://br.spoj.com/problems/FUSOES1/
// os comandos da main seguem os mesmo do código anterior, não otimizado
int main(){
    
    cin>>n>>k;
    
    for(int i=1; i<=n; i++){
        pai[i]=i;
    }
    
    char op;
    int banco1, banco2;
    
    for(int i=1; i<=k; i++){
        
        cin>>op>>banco1>>banco2;
        if(op=='F'){
            join(banco1, banco2);
        }
        else{
            if(find(banco1)==find(banco2)){
                cout<<"S\n";
            }
            else{
                cout<<"N\n";
            }
        }
    }
    
    return 0;
}
~~~