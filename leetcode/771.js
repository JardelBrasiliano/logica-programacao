/**
 * @param {string} jewels
 * @param {string} stones
 * @return {number}
 */
var numJewelsInStones = function(jewels, stones) {
  const meuItem = new Map();

  for (let index = 0; index < stones.length; index++) {
    const element = stones[index];

    const valor =  meuItem.get(element) || 0;
    const somarValor = valor+1;

    meuItem.set(element, somarValor);
  }
  let soma = 0;
  for (let index = 0; index < jewels.length; index++) {
    const element = jewels[index];

    const valor =  meuItem.get(element) || 0;
    soma = valor + soma;
  }

  return soma;
};

console.log(numJewelsInStones("aA", "aAAbbbb"));
console.log(numJewelsInStones("z", "ZZ"));