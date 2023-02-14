## O algoritmo de Euclides

É um método eficiente para calcular o maior divisor comum (gcd) de dois números inteiros. O algoritmo é baseado no fato de que o gcd de dois números não muda se o menor número for subtraído do maior número repetidamente, até que um deles se torne zero. O resultado final será o gcd dos números originais.

Em pseudocódigo, o algoritmo de Euclides pode ser descrito da seguinte maneira:

```c++
  function gcd(a, b)
      enquanto b != 0
          temp := b
          b := a % b
          a := temp
      fim enquanto
      retornar a
  fim função
```

```c++
  inline int gcd(int a, int b)
  {
    return b ? gcd(b, a % b) : a;
  }
```

Neste algoritmo, a e b são os dois números inteiros cujo gcd está sendo calculado. O operador % calcula o resto da divisão de a por b. A variável temp é usada para trocar os valores de a e b durante o processo de subtração. O algoritmo continua a subtrair o menor valor do maior valor até que um dos valores se torne zero, momento em que o valor restante é o gcd dos dois números originais.

[CP_ALGORITHMS](https://cp-algorithms.com/algebra/euclid-algorithm.html)
