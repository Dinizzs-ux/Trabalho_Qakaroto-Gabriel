# 📚 Desafios de Estrutura de Dados: Pilhas Dinâmicas em C

Bem-vindo(a) ao repositório! Este projeto contém a implementação de duas atividades práticas focadas em **Estruturas de Dados**, mais especificamente na construção e manipulação de **Pilhas Dinâmicas (Stacks)** utilizando a linguagem C.

O maior desafio (e a parte mais legal)? **Tudo foi feito "na unha"**. Nenhuma biblioteca de estrutura de dados pronta ou funções nativas de manipulação de strings foram utilizadas. Todo o gerenciamento de memória e lógica de ponteiros foi construído do zero. 🚀

---

## 🎯 O que você vai encontrar aqui?

### Desafio 1: O Validador de Expressões ⚖️
Um programa que recebe uma expressão matemática ou de código e verifica se os parênteses `()`, chaves `{}` e colchetes `[]` estão perfeitamente balanceados.
* **Como funciona?** Ao ler a string, o programa "empilha" (push) todo símbolo de abertura. Quando encontra um símbolo de fechamento, ele "desempilha" (pop) o topo e verifica se eles formam um par válido. Se a pilha terminar vazia, a expressão está correta!

### Desafio 2: Inversor de Strings 🔄
Um programa simples que recebe uma frase e a devolve de trás para frente.
* **A regra de ouro:** Não podíamos usar vetores auxiliares ou funções como `strrev`. 
* **Como funciona?** Aproveitamos a natureza **LIFO** (*Last In, First Out* - O último a entrar é o primeiro a sair) da pilha. Empilhamos cada letra da palavra original e, ao desempilhar, sobrescrevemos a própria string, invertendo-a magicamente com economia de memória.

---

## 🛠️ Tecnologias e Conceitos Utilizados

* **Linguagem C** * **Alocação Dinâmica de Memória** (`malloc` e `free`)
* **Ponteiros** (Manipulação direta de endereços de memória)
* **Estruturas (Structs)** (Criação de nós e controle da pilha)
* **Lógica LIFO** (Pilha)

---

## 💻 Como rodar na sua máquina

Para testar os códigos, você precisará de um compilador C instalado (como o GCC).

**1. Clone este repositório:**
```bash
