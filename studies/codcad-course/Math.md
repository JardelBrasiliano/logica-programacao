Lib: #include <cmath>

pow:
Código a seguir vai imprimir as potências de dois
~~~c++
#include <iostream>
#include <cmath>

using namespace std;

int main(){
  for(double x = 0; x < 11; ++x){
    cout << pow(2, x) << "\n";
  }

  return 0;
}
~~~
sqrt:
Essa função retorna a raiz quadrada de um número, enquanto que usar pow(n, 0.5) funcionaria, sqrt é mais rápida.
~~~c++
double raiz = sqrt(x);
~~~
abs:
Absoluto 
~~~c++
int absoluto = abs(-10);
~~~
ceil e floor:
Ceil retorna o menor inteiro maior que o double
floor retorna o maior inteiro menor que double passado como parâmetro
~~~c++
#include <iostream>
#include <cmath>

using namespace std;

int main(){
  double x;
  x = 1.615;
  cout << ceil(x) << "\n"; //Imprime 2
  cout << floor(x) << "\n"; //Imprime 1
  x = 1.00;
  cout << ceil(x) << "\n"; //Imprime 1
  cout << floor(x) << "\n"; //Imprime 1
  x = -1.00;
  cout << ceil(x) << "\n"; //Imprime -1
  cout << floor(x) << "\n"; //Imprime -1
  x = -3.1415926535;
  cout << ceil(x) << "\n"; //Imprime -3
  cout << floor(x) << "\n"; //Imprime -4
  return 0;
}
~~~
cos, sin e tan:
~~~c++
double valor = cos(x);
~~~
acos, asin, atan:
Os inversos das funções comuns de trigonometria, por exemplo acos(x) retorna o valor em radianos que tem cos igual a x.
log, log10, exp: