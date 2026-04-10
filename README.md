## 📁 Detalhes da Atividade Avaliativa 3 (Filas)

| Arquivo | Descrição |
| :--- | :--- |
| `simulacao_atendimento.c` | Simula uma fila de clientes, calculando o tempo de espera acumulado de cada um. |
| `fila_impressao.c` | Sistema de impressão que organiza documentos por nível de prioridade e ordem de chegada. |

## Sugestões úteis

* **Lógica FIFO:** Ao contrário da pilha, a fila segue o princípio *First In, First Out*. No Exercício 1, garanta que o ponteiro `inicio` sempre aponte para o próximo cliente a ser atendido.
* **Fila de Prioridade:** No Exercício 2, a inserção deve ser cautelosa. O programa percorre a fila com ponteiros para encontrar a posição correta baseada na prioridade antes de realizar o encadeamento do novo nó.
* **Gestão de Memória:** Como a estrutura é 100% dinâmica, lembre-se de utilizar o `free()` no momento do *dequeue* para evitar que a memória do sistema fique sobrecarregada durante a simulação.
* **Critério de Desempate:** Para a fila de impressão, se dois documentos tiverem a mesma prioridade, a regra de negócio exige que o documento que chegou primeiro seja mantido à frente.

## Tecnologias e Ferramentas

* **Linguagem:** C (Padrão C11/C17)
* **Estruturas:** Filas Dinâmicas (Nodes), Structs e Ponteiros Duplos.
* **Conceitos:** Gerenciamento de Filas, Simulação de Processos e Ordenação por Inserção.
