# Exercício: Sistema de Cálculo de Médias Escolares

Crie um programa em C que implemente um sistema para calcular a média das notas de alunos, seguindo as seguintes especificações:

## Requisitos:

1. Crie uma função chamada `calcularMedia` que:
   - Receba como parâmetros três notas (tipo float)
   - Calcule a média aritmética das três notas
   - Retorne o resultado do cálculo

2. Crie uma função chamada `verificarSituacao` que:
   - Receba como parâmetros três notas (tipo float)
   - DEVE USAR a função `calcularMedia` internamente para calcular a média
   - Retorne um caractere representando a situação do aluno:
     * 'A' para média >= 7.0
     * 'R' para média < 7.0 e >= 5.0
     * 'F' para média < 5.0

## Observações:
- Não é necessário implementar a função main()
- Todas as notas devem ser consideradas de 0 a 10
- Use protótipos de função no início do código
- Documente cada função explicando seu propósito

## Exemplo de uso das funções:
```c
char situacao = verificarSituacao(7.5, 8.0, 6.5);
```

## Desafio adicional:
- Implemente validação para garantir que as notas estejam entre 0 e 10
- Se uma nota for inválida, a função deve retornar 'E' (erro)

## Dicas:
- Lembre-se de incluir as bibliotecas necessárias
- Use comentários para documentar seu código
- A função verificarSituacao DEVE chamar calcularMedia internamente
