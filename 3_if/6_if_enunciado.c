**Exercício:**  

Nome do exercício: 6_if

_O nome do arquivo deve ser notas_2.c._

Escreva um programa em C que leia três notas de um aluno e calcule a média aritmética delas. 
Leia também a frequência, um valor inteiro entre 0 e 100.
  
Com base na média e na frequência, o programa deve exibir a seguinte classificação:  

- **Média maior que 8** e Frequência maior ou igual a 75% → "Aprovado com Distinção"  
- **Média maior ou igual a 6** ou → "Aprovado Direto"  
- **Média maior ou igual a 4** ou Frequência menor que 75%  → "Vai para Final"  
- **Média menor que 4** ou Frequência menor ou igual a 50% → "Reprovado Direto"  

O programa deve solicitar ao usuário que insira três notas (valores reais) e, após calcular a média, exibir a mensagem correspondente à situação do aluno.  

**Exemplo de Entrada:**  
```
7.5 8.2 9.0
```
**Exemplo de Saída:**  
```
Aprovado com Distinção.
```

**Exemplo de Entrada:**  
```
5.0 6.0 7.0
```
**Exemplo de Saída:**  
```
Aprovado Direto.
```
