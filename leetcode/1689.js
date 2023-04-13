/**
 * @param {string} n
 * @return {number}
 */
var minPartitions = function(n) {
  let maior = 0;
  const listNumber = n.split('');
  listNumber.forEach(number => {if(+number > maior) maior = +number})
  return maior;
};

