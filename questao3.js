
//QUESTÃO 3:
//Linguagem JavaScript

const dados = require('./dados.json');

// Calcula o menor valor de faturamento diário
const menorFaturamento = Math.min(...dados);

//Calcula o maior valor de faturamento diário
const maiorFaturamento = Math.max(...dados);

// Calcula a média de faturamento diário (desconsiderando dias sem faturamento)
const faturamentoTotal = dados.reduce((acumulado, valor) => acumulado + valor, 0);
const diasComFaturamento = dados.filter(valor => valor > 0).length;
const mediaFaturamento = faturamentoTotal / diasComFaturamento;

// Calcula o número de dias com faturamento acima da média
const diasAcimaDaMedia = dados.filter(valor => valor > mediaFaturamento).length;

// Exibe os resultados
console.log(`Menor faturamento diário: ${menorFaturamento}`);
console.log(`Maior faturamento diário: ${maiorFaturamento}`);
console.log(`Número de dias com faturamento acima da média: ${diasAcimaDaMedia}`);
