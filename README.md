# Árvore Binária de Busca (ABB) – Exercício 1

Este projeto implementa uma Árvore Binária de Busca (ABB) em C++, conforme especificado no exercício 1 da disciplina de Estruturas de Dados, ministrada pelo Prof. Dr. André Mendes Garcia.

## Funcionalidades

A classe `TABB` possui os seguintes métodos:

- **Init (protegido)**: Atribui `NULL` ao ponteiro da raiz.
- **Construtor**: Chama o método `Init`.
- **GetRaiz (público)**: Retorna o ponteiro da raiz.
- **InserirNo (público)**: Insere um nó na árvore.
- **LocalizarNo (público)**: Localiza um nó na árvore.
- **Impressão dos elementos por caminhamento em pré-ordem**.
- **Impressão dos elementos por caminhamento em in-ordem**.
- **Impressão dos elementos por caminhamento em pós-ordem**.

## Como Executar o Projeto

1. Clone o repositório:
   ```bash
   git clone https://github.com/ClaudioMatheusDev/-rvore-Bin-ria-de-Busca-ABB-C-
   ```

2. Navegue até o diretório do projeto:
   ```bash
   cd -rvore-Bin-ria-de-Busca-ABB-C-
   ```

3. Compile o código:
   ```bash
   g++ -o abb main.cpp TABB.cpp
   ```

4. Execute o programa:
   ```bash
   ./abb
   ```

## Estrutura do Projeto

- `TABB.h`: Declaração da classe `TABB`.
- `TABB.cpp`: Implementação dos métodos da classe `TABB`.
- `main.cpp`: Programa principal que utiliza a classe `TABB`.

## Exemplo de Uso

O programa principal deve:

1. Inserir a árvore do exemplo:

![image](https://github.com/user-attachments/assets/8a8f2def-696c-45c3-a6ef-7be6e7e7628b)

2. Pedir ao usuário elementos para serem pesquisados na árvore.

## Contribuição

Se você deseja contribuir com este projeto, siga os passos abaixo:

1. Faça um fork do repositório.
2. Crie uma nova branch:
   ```bash
   git checkout -b minha-nova-funcionalidade
   ```
3. Faça suas alterações e commit:
   ```bash
   git commit -m 'Adiciona nova funcionalidade'
   ```
4. Envie para o repositório remoto:
   ```bash
   git push origin minha-nova-funcionalidade
   ```
5. Abra um Pull Request.

## Licença

Este projeto está licenciado sob a Licença MIT. Veja o arquivo [LICENSE](LICENSE) para mais detalhes.

## Contato

Para mais informações, entre em contato com [Claudio Matheus](https://github.com/ClaudioMatheusDev).

---
