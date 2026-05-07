# Exercícios de Arrays em JavaScript

---

# Módulo 1 — forEach()

## Conceito

O `forEach()` percorre um array executando uma ação para cada item.

Muito usado para:

- logs
- contadores
- somas
- efeitos colaterais
- percorrer coleções

---

## Exercício 1

Mostre cada número no console:

```js
[1, 2, 3, 4];
```

---

## Exercício 2

Some todos os números usando `forEach()`:

```js
[10, 20, 30];
```

---

## Exercício 3

Mostre:

```txt
Olá João
Olá Maria
Olá Pedro
```

Usando:

```js
["João", "Maria", "Pedro"];
```

---

## Exercício 4

Conte quantos números são pares:

```js
[1, 2, 4, 7, 8];
```

---

## Exercício 5

Crie um novo array manualmente usando `forEach()`:

```js
[1, 2, 3];
```

Resultado esperado:

```js
[2, 4, 6];
```

---

# Módulo 2 — map()

## Conceito

O `map()` transforma cada item de um array em outro valor.

Ele SEMPRE retorna um novo array.

---

## Exercício 1

Transforme:

```js
const numeros = [1, 2, 3, 4, 5];
```

Em:

```js
[10, 20, 30, 40, 50];
```

---

## Exercício 2

Transforme:

```js
const nomes = ["joao", "maria", "pedro"];
```

Em:

```js
["JOAO", "MARIA", "PEDRO"];
```

---

## Exercício 3

Crie um novo array contendo o tamanho de cada palavra:

```js
["banana", "uva", "abacaxi"];
```

Resultado esperado:

```js
[6, 3, 7];
```

---

## Exercício 4

Adicione `"R$ "` antes de cada preço:

```js
[10, 20, 30];
```

---

## Exercício 5

Transforme:

```js
[
  { nome: "João", idade: 20 },
  { nome: "Maria", idade: 25 },
];
```

Em:

```js
["João tem 20 anos", "Maria tem 25 anos"];
```

---

# Módulo 3 — filter()

## Conceito

O `filter()` seleciona apenas elementos que passam em uma condição.

---

## Exercício 1

Pegue apenas números maiores que 10:

```js
[5, 12, 8, 20, 3];
```

---

## Exercício 2

Pegue apenas nomes com mais de 5 letras:

```js
["Ana", "Fernando", "Carlos", "Li"];
```

---

## Exercício 3

Pegue apenas números pares:

```js
[1, 2, 3, 4, 5, 6];
```

---

## Exercício 4

Pegue apenas usuários ativos:

```js
[
  { nome: "João", ativo: true },
  { nome: "Maria", ativo: false },
  { nome: "Pedro", ativo: true },
];
```

---

## Exercício 5

Pegue apenas palavras que começam com `"a"`:

```js
["abacaxi", "banana", "aveia", "uva"];
```

---

# Módulo 4 — find()

## Conceito

O `find()` retorna o primeiro item encontrado.

---

## Exercício 1

Encontre o número 20:

```js
[5, 10, 20, 30];
```

---

## Exercício 2

Encontre o usuário chamado `"Maria"`:

```js
[{ nome: "João" }, { nome: "Maria" }, { nome: "Pedro" }];
```

---

## Exercício 3

Encontre a primeira palavra com mais de 5 letras:

```js
["uva", "banana", "abacaxi"];
```

---

## Exercício 4

Encontre o primeiro número par:

```js
[1, 3, 7, 8, 10];
```

---

## Exercício 5

Encontre um produto com preço maior que 100:

```js
[
  { nome: "Mouse", preco: 50 },
  { nome: "Monitor", preco: 500 },
];
```

---

# Módulo 5 — join()

## Conceito

O `join()` junta elementos de um array em uma string.

---

## Exercício 1

Transforme:

```js
["a", "b", "c"];
```

Em:

```txt
"a-b-c"
```

---

## Exercício 2

Crie uma frase:

```js
["Olá", "mundo"];
```

Resultado:

```txt
"Olá mundo"
```

---

## Exercício 3

Transforme:

```js
["2026", "05", "07"];
```

Em:

```txt
"2026/05/07"
```

---

## Exercício 4

Crie uma lista separada por vírgula:

```js
["banana", "uva", "maçã"];
```

---

## Exercício 5

Transforme um array de letras em uma palavra:

```js
["J", "S"];
```

Resultado:

```txt
"JS"
```

---

# Módulo 6 — trim()

## Conceito

O `trim()` remove espaços do começo e fim de uma string.

---

## Exercício 1

Remova os espaços:

```js
"   João   ";
```

---

## Exercício 2

Limpe todos os nomes:

```js
["  Ana ", " Pedro  ", " Maria "];
```

---

## Exercício 3

Verifique se:

```js
"   ";
```

Está vazia após trim.

---

## Exercício 4

Conte caracteres sem espaços externos:

```js
"   javascript   ";
```

---

## Exercício 5

Converta:

```js
"   olá mundo   ";
```

Para:

```txt
"OLÁ MUNDO"
```

---

# Módulo 7 — reverse()

## Conceito

O `reverse()` inverte a ordem dos elementos do array.

---

## Exercício 1

Inverta:

```js
[1, 2, 3, 4];
```

---

## Exercício 2

Inverta:

```js
["a", "b", "c"];
```

---

## Exercício 3

Mostre a última palavra primeiro:

```js
["começo", "meio", "fim"];
```

---

## Exercício 4

Crie uma string invertida:

```js
"javascript";
```

Dica:

- use `split`
- `reverse`
- `join`

---

## Exercício 5

Inverta a ordem de usuários:

```js
[{ nome: "João" }, { nome: "Maria" }, { nome: "Pedro" }];
```

---

# Módulo 8 — reduce()

## Conceito

O `reduce()` reduz vários valores em um único resultado.

Muito usado para:

- somas
- agrupamentos
- estatísticas
- cálculos
- processamento financeiro

---

## Exercício 1

Some todos os números:

```js
[1, 2, 3, 4];
```

---

## Exercício 2

Multiplique todos os números:

```js
[2, 3, 4];
```

---

## Exercício 3

Conte quantas letras existem no total:

```js
["oi", "javascript", "dev"];
```

---

## Exercício 4

Some os preços:

```js
[
  { nome: "Mouse", preco: 50 },
  { nome: "Teclado", preco: 100 },
];
```

---

## Exercício 5

Agrupe por categoria:

```js
[
  { nome: "Mouse", categoria: "tech" },
  { nome: "Teclado", categoria: "tech" },
  { nome: "Banana", categoria: "food" },
];
```

Resultado esperado:

```js
{
  tech: [...],
  food: [...]
}
```

---

# Módulo Final — Desafio Completo

## Objetivo

Misturar vários conceitos ao mesmo tempo.

---

```js
const usuarios = [
  { nome: " João ", idade: 20, ativo: true },
  { nome: " Maria ", idade: 17, ativo: false },
  { nome: " Pedro ", idade: 30, ativo: true },
];
```

Faça:

1. Remova espaços dos nomes
2. Pegue apenas usuários ativos
3. Transforme os nomes em maiúsculo
4. Crie uma string final:

```txt
"JOÃO, PEDRO"
```

---

# Ordem Recomendada de Estudo

1. forEach
2. map
3. filter
4. find
5. join
6. trim
7. reverse
8. reduce

---

# Glossário

| Termo                  | Explicação                     |
| ---------------------- | ------------------------------ |
| Array                  | Lista de elementos             |
| Callback               | Função passada como parâmetro  |
| Iteração               | Percorrer elementos            |
| Transformação          | Converter valores              |
| Filtragem              | Selecionar elementos           |
| Acumulador             | Variável que junta resultados  |
| Imutabilidade          | Não alterar original           |
| Mutabilidade           | Alterar diretamente            |
| Predicate              | Função que retorna true/false  |
| Coleção                | Conjunto de dados              |
| Aggregation            | Agrupamento/redução            |
| Mapping                | Conversão de estrutura         |
| Functional Programming | Programação baseada em funções |
