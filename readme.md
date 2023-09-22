Claro, vou criar um arquivo README para explicar como rodar um programa em C com o Visual Studio Code. Certifique-se de que você já tenha o Visual Studio Code instalado em seu sistema antes de seguir estas instruções. Além disso, você precisará ter o compilador C, como o GCC, instalado no seu sistema.

# README: Como Rodar um Programa em C com o Visual Studio Code

Este guia explica os passos para configurar e rodar programas em C usando o Visual Studio Code em um ambiente Unix (Linux ou macOS). Certifique-se de que você tenha o Visual Studio Code e um compilador C (como o GCC) instalados no seu sistema.

## Passo 1: Instalação do Visual Studio Code

Se você ainda não tiver o Visual Studio Code instalado, siga estas etapas para fazer o download e a instalação:

1. Acesse o site oficial do Visual Studio Code em [https://code.visualstudio.com/](https://code.visualstudio.com/).
2. Baixe a versão apropriada para o seu sistema operacional.
3. Siga as instruções de instalação.

## Passo 2: Instalação da Extensão C/C++

Para escrever e compilar programas em C no Visual Studio Code, você precisará da extensão "C/C++" da Microsoft. Siga estas etapas para instalá-la:

1. Abra o Visual Studio Code.
2. Vá para a seção "Extensions" na barra lateral esquerda (ou pressione `Ctrl+Shift+X`).
3. Pesquise por "C/C++" na barra de pesquisa.
4. Clique em "Install" ao lado da extensão "C/C++" desenvolvida pela Microsoft.
5. Aguarde a instalação ser concluída.

## Passo 3: Criar um novo projeto em C

Agora que você tem o Visual Studio Code configurado, siga estas etapas para criar um novo projeto em C:

1. Abra o Visual Studio Code.
2. Crie uma nova pasta para o seu projeto e navegue até ela no terminal.
3. Abra o Visual Studio Code nesta pasta digitando `code .` no terminal.
4. Crie um novo arquivo de código-fonte C (por exemplo, `main.c`) dentro da pasta do projeto.

## Passo 4: Escrever e compilar o programa

Agora você pode escrever o seu programa em C dentro do arquivo `main.c`. Por exemplo:

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

Para compilar e executar o programa, siga estas etapas:

1. Abra um terminal dentro do Visual Studio Code (integre o terminal).
2. Navegue até a pasta do projeto se você não estiver nela.
3. Compile o programa usando o GCC. Por exemplo:

```
gcc -o meu_programa main.c
```

Isso criará um executável chamado `meu_programa`.

4. Execute o programa:

```
./meu_programa
```

Você deve ver a saída do programa no terminal.

## Conclusão

Agora você configurou com sucesso o Visual Studio Code para escrever, compilar e executar programas em C. Você pode criar novos arquivos de código-fonte, editar e expandir seus projetos à medida que avança em seus estudos em C. Boa codificação!

## Link Livro
1. Acesse o link do livro por aqui[https://www.inf.ufpr.br/lesoliveira/download/c-completo-total.pdf](https://www.inf.ufpr.br/lesoliveira/download/c-completo-total.pdf).
