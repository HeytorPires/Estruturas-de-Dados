const nums = [
  { nome: "João", idade: 20 },
  { nome: "Maria", idade: 25 },
];
let texto = nums.map((n) => `${n.nome} tem ${n.idade} anos`);

console.log(texto);
