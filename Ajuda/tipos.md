Delégua x C

% \- scanf e printf

inteiro  – int –  %d  
real – float – %f  – double – %lf  
texto –   
	char (UM CARACTER) – %c  
	char\[20\] (19 caracteres) %s  
	char\[100\] (99 caracteres)  
	char\[101\] (100 caracteres)

Uma string (um texto) em C é um vetor.

ADOLFO

| 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
| :---- | :---- | :---- | :---- | :---- | :---- | :---- | :---- | :---- | :---- |
| A | D | O | L | F | O | \\0 | \\0 | \\0 | \\0 |

**Valentina**    
char nome\[9\]

| 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |
| :---- | :---- | :---- | :---- | :---- | :---- | :---- | :---- | :---- |
| V | a | l | e | n | t | i | n | a |

Forma de evitar estouro de memória:  
    scanf("%8s", \&nome);

\-32767 a 32768
