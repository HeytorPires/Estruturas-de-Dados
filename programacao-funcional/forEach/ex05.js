//Crie uma função que receba um array de números e retorne a soma apenas dos números pares.
const nums = [1, 2, 3];

let newNums = [];
nums.forEach((n) => {
  newNums.push(n * 2);
});

console.log(newNums);
