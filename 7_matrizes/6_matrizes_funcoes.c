Dizemos que uma matriz quadrada inteira é um "quadrado equilibrado" se a soma da primeira linha
for igual à soma da última linha, a soma da primeira coluna for igual à soma da última coluna,
e a soma da diagonal principal for igual à soma da diagonal secundária.

Escreva um programa que diz se uma matriz de ordem 4, com valores recebidos pelo teclado,
é um quadrado equilibrado.



1 2 2 1
3 4 4 3
3 4 4 3
1 2 2 1

Soma da primeira linha: 1 + 2 + 2 + 1 = 6
Soma da última linha: 1 + 2 + 2 + 1 = 6

Soma da primeira coluna: 1 + 3 + 3 + 1 = 8
Soma da última coluna: 1 + 3 + 3 + 1 = 8

Soma da diagonal principal: 1 + 4 + 4 + 1 = 10
Soma da diagonal secundária: 1 + 4 + 4 + 1 = 10


 5   8   3   4
12   6   7   5
 9   1  10   2
 4   7   5  14

Não é quadrado equilibrado.
Verificação:

Primeira linha: 5 + 8 + 3 + 4 = 20
Última linha: 4 + 7 + 5 + 14 = 30
Primeira coluna: 5 + 12 + 9 + 4 = 30
Última coluna: 4 + 5 + 2 + 14 = 25
Diagonal principal: 5 + 6 + 10 + 14 = 35
Diagonal secundária: 4 + 7 + 9 + 4 = 24
