## 📂 Arquivos da Lista de Exercícios

| Arquivo | Descrição |
| :--- | :--- |
| `desafio1_balanço.c` | Validador de expressões: verifica se `()`, `{}`, `[]` estão balanceados usando pilha dinâmica. |
| `desafio2_inversao.c` | Inversor de strings: inverte uma frase utilizando a lógica LIFO (pilha) sem vetores auxiliares. |

## Dicas úteis

* **Pilha Dinâmica:** Os exercícios utilizam `struct` e ponteiros para alocação em tempo de execução. Certifique-se de que o sistema possui memória disponível para as operações de `push`.
* **Gestão de Memória:** Como trabalhamos com alocação dinâmica, cada nó criado com `malloc` é liberado com `free` imediatamente após o `pop`, evitando vazamentos de memória (*memory leaks*).
* **Manipulação de Strings:** No Desafio 2, a inversão ocorre no próprio endereço da string original. Tenha cuidado ao manipular o ponteiro para não perder a referência do final da string (`\0`).

## Tecnologias e Conceitos

* **Linguagem C**: Foco em lógica de baixo nível.
* **Estrutura de Dados**: Implementação manual de Pilha (Stack).
* **Alocação Dinâmica**: Uso intensivo de ponteiros e gestão de memória.
* **Lógica LIFO**: (*Last In, First Out*) como conceito central de processamento.
