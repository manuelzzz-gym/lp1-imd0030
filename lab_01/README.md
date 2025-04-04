## Atividade 1.1. Manipulando entrada e saída com C++

Para fixarmos as diferenças entre C e C++ ao se manipular entrada e saída, desenvolva um programa (em um arquivo chamado `media.cpp`) que calcula a média aritmética de 3 números inteiros fornecidos pelo usuário através da entrada padrão. A saída do programa deve ser somente a nota referente a média aritmética das 3 notas fornecidas pelo usuário. Exemplo de interação com o programa:

```bash
$ ./media
Entre com a nota da unidade 1: 7
Entre com a nota da unidade 2: 6
Entre com a nota da unidade 3: 9
Média: 7.33
```

**Obs:** Pesquise como truncar um número de ponto flutuante em duas casas decimais!

## Atividade 1.2. Controlando o fluxo em C++

Implemente um programa (em um arquivo chamado `fluxo.cpp`) que recebe dois números, onde o primeiro deve ser menor que o segundo (faça essa validação, e solicite novas entradas para o usuário caso seja inválido). Em seguida, o programa calcula a porcentagem que o primeiro representa do segundo.

Por exemplo, se digitou 12 e 21, isso quer dizer que 12 representa 57.14% de 21. 

Exemplo de interação com o programa:

```bash
$ ./fluxo
Entre com o primeiro valor: 2
Entre com o segundo valor: 5
40.00%
```

Outro exemplo de interação com o programa:

```bash
$ ./fluxo
Entre com o primeiro valor: 9
Entre com o segundo valor: 3
Erro! Entre com um primeiro valor menor ou igual ao segundo.
Entre com o primeiro valor: 3
Entre com o segundo valor: 9
33.33%
```

**Obs:** Garanta que sempre aparecerão duas casas decimais.

## Compilação de um programa desenvolvido em C++

Utilize as *option flags* `-Wall`,  `-std=c++17` e `-o` no momento da compilação. Exemplo:

```bash
$ g++ -Wall -std=c++17 -o helloworld helloworld.cpp
```