//Crie uma função que receba um array de números e retorne a soma apenas dos números pares.
const nums = [1, 2, 4, 6, 8];

let quantity = 0;
nums.forEach((n) => {
  if (n % 2 == 0) {
    quantity += 1;
  }
});

console.log(quantity);
