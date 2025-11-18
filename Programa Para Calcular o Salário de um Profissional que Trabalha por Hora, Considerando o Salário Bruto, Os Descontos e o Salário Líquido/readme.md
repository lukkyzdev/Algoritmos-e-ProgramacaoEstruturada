# Programa Para Calcular o Salário de um Profissional que Trabalha por Hora, Considerando o Salário Bruto, Os Descontos e o Salário Líquido <img src="https://cdn.jsdelivr.net/gh/devicons/devicon@latest/icons/c/c-original.svg" height="20" width="20" />

## *Atividade Proposta* 📝
*Nesta atividade, desenvolva um programa
que calcule o salário de um profissional que trabalha por hora,
considerando o salário bruto, os descontos e o salário líquido. O
programa deve ser modularizado em três funções específicas:*

*Uma para calcular o salário bruto, outra para calcular os descontos,
e uma terceira para calcular o total líquido.*

## *Enunciado* 📚
***Desenvolva um programa em C que:***

1️⃣ - *Solicite ao usuário o valor da sua hora de trabalho e a
quantidade de horas trabalhadas no mês.*

2️⃣ - *Calcule o salário bruto utilizando a função
calcular_salario_bruto().*

3️⃣ - *Calcule o desconto de 9% sobre o salário bruto utilizando a
função calcular_desconto().*

4️⃣ - *Calcule o salário líquido utilizando a função
calcular_salario_liquido(), que deve subtrair o desconto do valor
bruto.*

5️⃣ - *Exiba o salário bruto, o desconto e o salário líquido ao usuário.*

## *Cenário* 🎬
*Imagine que você está desenvolvendo um programa
para uma empresa que deseja automatizar o cálculo dos salários
de seus funcionários que trabalham por hora. O cálculo precisa ser
realizado de forma modular, separando o cálculo do salário bruto,
os descontos e o valor líquido a ser pago ao funcionário.*

---
## Execução do Código

![Execução](../images/workingcode4.png)

## Explicação

***O programa começa como um formulário:***

- *Ele te pergunta: "Quanto você ganha por hora?"*
- *E depois: "Quantas horas você trabalhou este mês?"*

--

*Aqui está a parte organizada. O programa não faz todas as contas em um
lugar só, ele chama três funções para fazer cada tarefa:*

***Salário Bruto (calcular_salario_bruto)***
- *Trabalho: Ele pega o valor da hora e multiplica pelas horas trabalhadas.*
- *Resultado: O Salário Bruto (o total antes de qualquer imposto ou
desconto).*

***Desconto (calcular_desconto)***
- *Trabalho: Ele pega o Salário Bruto calculado e simplesmente retira 9% (a
taxa de desconto).*
- *Resultado: O Valor do Desconto.*

***Salário Líquido (calcular_salario_liquido)***
- *Trabalho: Ele pega o Salário Bruto e subtrai o Valor do Desconto.*
- *Resultado: O Salário Líquido (o que o funcionário realmente vai receber).*

--

*No final, o programa pega os resultados de cada assistente e exibe um
relatório claro, mostrando o bruto, quanto foi descontado e o valor final a ser
pago.*

***Resumindo:*** *O algoritmo usa a modularização para isolar cada cálculo
(Bruto, Desconto, Líquido) em sua própria função, tornando o código limpo,
fácil de entender e simples de atualizar se a taxa de desconto mudar, por
exemplo.*
