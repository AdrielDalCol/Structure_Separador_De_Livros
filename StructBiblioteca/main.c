#include <stdio.h>
#include <stdlib.h>
#define t 3

struct registro
{
    char campi;
    char titulo[50];
    int codigo;
};

int i;

void ler(struct registro x[t])
{
    for(i=0;i<t;i++)
    {
        printf("\nDigite o titulo do %io livro: ", i+1);
        scanf("\n%[^\n]", x[i].titulo);
        printf("\nSendo [M] para matriz,[B] para biopraticas e [O] para boulevard");
        printf("\nDigite o campi do %io livro: ", i+1);
        scanf(" %c", &x[i].campi);
        printf("\nDigite o codigo do %io livro: ", i+1);
        scanf("%i", &x[i].codigo);
    }
}

void calc(struct registro x[t])
{
    float taxam,taxab,taxao;
    int qtm=0,qtb=0,qto=0;
    for(i=0;i<t;i++)
    {
        if(x[i].campi=='M'||x[i].campi=='m')
        {
            qtm++;
        }
        if(x[i].campi=='B'||x[i].campi=='b')
        {
            qtb++;
        }
        if(x[i].campi=='O'||x[i].campi=='o')
        {
            qto++;
        }
    }
    taxam=(qtm/(t*1.0))*100;
    taxab=(qtb/(t*1.0))*100;
    taxao=(qto/(t*1.0))*100;
    printf("\n %.2f%% sao de livros do campi Matriz!",taxam);
    printf("\n %.2f%% sao de livros do campi Biopraticas!",taxab);
    printf("\n %.2f%% sao de livros do campi Boulevard!",taxao);
}

int main()
{
    struct registro x[t];
    ler(x);
    calc(x);
    return 0;
}