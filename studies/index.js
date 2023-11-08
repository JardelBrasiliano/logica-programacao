const s = "fui para a faculdade no feriado de natal AAA";

const listaPalavras = s.split(" ");
let indexMaior = 0;
let numeroMaior = 0;

listaPalavras.forEach((palavra, index) => {
  const letras = new Map();
  const arrayLetras = palavra.split('');
  arrayLetras.forEach(letra => {
    const valor =  letras.get(letra) || 0;
    const somarValor = valor+1;
    letras.set(letra, somarValor);
  });

  let maiorLetra = 0;
  for (var [key, value] of letras) {
    if(maiorLetra < value) {
      maiorLetra = value;
    }
  }
  console.log();
  if(numeroMaior < maiorLetra) {
    numeroMaior = maiorLetra;
    indexMaior = index
  }
})

console.log('listaPalavras: ',listaPalavras[indexMaior]);