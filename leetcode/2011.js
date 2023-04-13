/**
 * @param {string[]} operations
 * @return {number}
 */
var finalValueAfterOperations = function(operations) {
  let contar = 0;
  operations.forEach(operacao => {
    if(operacao.includes("+")){
      contar++;
    } else {
      contar--;
    }
  })
  return contar;
};

console.log(finalValueAfterOperations(["X++","++X","--X","X--"]));