### Questão: Processamento de Arquivos Texto em C

Escreva um programa em C que realiza as seguintes tarefas:

1. Crie um arquivo de texto chamado `palavras.txt` e escreva nele uma lista de palavras, cada uma em uma linha. As palavras devem ser fornecidas pelo usuário. O programa deve solicitar ao usuário que insira palavras até que ele digite a palavra "fim" (que não deve ser incluída no arquivo).

2. Após criar o arquivo, o programa deve abrir o arquivo `palavras.txt` para leitura e contar quantas palavras começam com uma letra específica. A letra deve ser fornecida pelo usuário.

3. O programa deve exibir na tela o número de palavras que começam com a letra informada.

#### Requisitos:
- Utilize as funções `fopen`, `fclose`, `fprintf`, `fgets` e `fscanf` para manipular o arquivo.
- Certifique-se de verificar se o arquivo foi aberto com sucesso antes de realizar qualquer operação.
- O programa deve ser capaz de lidar com possíveis erros, como a incapacidade de abrir o arquivo.

#### Exemplo de Funcionamento:

```
Digite uma palavra (ou 'fim' para encerrar): casa
Digite uma palavra (ou 'fim' para encerrar): carro
Digite uma palavra (ou 'fim' para encerrar): mesa
Digite uma palavra (ou 'fim' para encerrar): cadeira
Digite uma palavra (ou 'fim' para encerrar): fim

Digite a letra para contar as palavras que começam com ela: c
Número de palavras que começam com 'c': 3
```

---

### Dicas:
- Use um loop para ler as palavras do usuário e escrevê-las no arquivo.
- Use outro loop para ler as palavras do arquivo e verificar se elas começam com a letra especificada.
- Lembre-se de fechar o arquivo após cada operação.

Essa questão trabalha com criação, escrita e leitura de arquivos texto, além de manipulação de strings e interação com o usuário. Boa prática! 😊
