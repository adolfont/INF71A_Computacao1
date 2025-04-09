**Exercício:**  

Nome do exercício: 6_if

_O nome do arquivo deve ser notas_2.c._

Inclua o link para a resposta em <https://forms.gle/JdD97kvGm28LPJZT6>.

Escreva um programa em C que leia três notas (do tipo 'float') de um aluno e calcule a média aritmética delas. 

Leia também a percentagem de frequência, um valor inteiro entre 0 e 100.
  
Com base na média e na frequência, o programa deve exibir a seguinte classificação:  

### Condições de Aprovação:

1. **Aprovado com Distinção**
    
    - Média **\> 8,0** **e** Frequência **≥ 75%**
        
2. **Aprovado Direto**
    
    - Média **≥ 6,0** **e** Frequência **≥ 75%** **e** não se enquadra em "Aprovado com Distinção" _(ou seja, média ≤ 8,0)_
        
3. **Vai para Final**
    
    - **Média ≥ 4,0 e < 6,0** **e** Frequência **≥ 75%**  
        **OU**
        
    - **Média ≥ 6,0** **e** Frequência **< 75%** _(caso o aluno tenha média boa mas falta frequência)_  
        **OU**
        
    - **Média ≥ 4,0** **e** Frequência **>50% e < 75%** 
        
4. **Reprovado Direto**
    
    - Demais casos
  
### A mensagem escrita na tela deve ser:
- O estudante foi (CATEGORIA) pois teve média (MÉDIA) e frequência (FREQUENCIA)%. 

