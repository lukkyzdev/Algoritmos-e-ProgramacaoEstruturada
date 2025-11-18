# Operadores Aritméticos, Relacionais e Lógicos em Diferentes Situações  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon@latest/icons/c/c-original.svg" height="20" width="20" />

## Atividade Proposta 📝
- *Nesta atividade, você vai desenvolver um
programa em C que utilize operadores aritméticos, relacionais e
lógicos em diferentes situações. O foco é aprender a combinação
desses operadores para criar expressões que realizem cálculos e
tomadas de decisões baseadas em condições lógicas.*

## Enunciado 📚
*Crie um programa em C que solicite ao usuário três
números inteiros e, em seguida, execute as seguintes operações:*

1️⃣ - ***Calcule a soma, subtração, multiplicação e divisão dos três
números.***

2️⃣ - ***Verifique, utilizando operadores relacionais, se o primeiro
número é maior que o segundo, e se o segundo é menor que o
terceiro.***

3️⃣ - ***Utilize operadores lógicos para verificar se o primeiro número é
positivo e o segundo número é par. Caso ambas as condições
sejam verdadeiras, o programa deverá exibir uma mensagem
específica.***

## Cenário 🎬
- *O programa será usado por um sistema de cálculo que exige
verificações matemáticas simples e validações lógicas com base
nos números fornecidos.*
- *O foco é compreender como utilizar operadores aritméticos para
calcular resultados e operadores relacionais e lógicos para validar
condições.*

---
## Execução do Código

![Execução](./images/workingcode1.png)

## Explicação

*Basicamente, ele faz o seguinte:*

### ***1- Perguntas e Coleta de Dados***

*O assistente pergunta por três números inteiros e guarda cada um
em uma caixinha (chamadas num1, num2 e num3).*

--

### ***2- Contas Básicas (Operadores Aritméticos)***

Aqui, ele pega os números e faz as contas básicas, como se
estivesse usando uma calculadora:

*Faz a Soma total dos três.
Faz a Subtração dos dois primeiros.
Faz a Multiplicação dos dois primeiros.
Faz a Divisão do primeiro pelo segundo.*

--

### ***3- Fazer Comparações (Operadores Relacionais)***

*Depois de fazer as contas, ele começa a comparar os números e a
responder com "Sim" ou "Não":*

***Pergunta 1:*** *O primeiro número é maior que o segundo?*

***Pergunta 2:*** *O segundo número é menor que o terceiro?*

*Ele guarda as respostas ("Verdadeiro" ou "Falso") para que você
saiba como os números se relacionam.*

--

### ***4- Checar Regras Complexas (Operadores Lógicos)***

*Esta é a parte onde ele combina duas regras para ver se ambas são
verdadeiras:*

***Regra A:*** *O primeiro número é positivo (maior que zero)?*
***Regra B:*** *O segundo número é par (resto da divisão por dois é
zero)?*

--

*O assistente só exibe a "Mensagem Específica" se **AMBAS** as
regras (A E B) forem cumpridas. Se apenas uma for verdadeira, ou
nenhuma for verdadeira, ele simplesmente diz que as regras não
foram totalmente satisfeitas.*
