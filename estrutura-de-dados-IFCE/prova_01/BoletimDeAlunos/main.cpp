#include<iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<string>

using namespace std;

#include "auxiliar.h"
#include "Layout.h"

#define TAM_MAX_NAME 50


typedef struct no{
    int conteudo;
    char nome[TAM_MAX_NAME];
    double n1;
    double n2;
    struct no *esquerdo, *direita;
}No;

typedef struct {
    No *raiz;
}ArvB;

No* inserir(No *raiz, int valor, char nome[TAM_MAX_NAME]){
    if(raiz == NULL){
        No *novo = (No*)malloc(sizeof(No));
        novo->conteudo = valor;
        strcpy(novo->nome, nome);
        novo->esquerdo = NULL;
        novo->direita = NULL;
        novo->n1 = -1;
        novo->n2 = -1;
        return novo;
    }else{
        if(valor < raiz->conteudo){
            raiz->esquerdo = inserir(raiz->esquerdo, valor, nome);
        }
        if(valor > raiz->conteudo){
            raiz->direita = inserir(raiz->direita, valor, nome);
        }
        return raiz;
    }
}

No* buscar(No *raiz, int chave){
    if(raiz == NULL){
        return NULL;
    }else{
        if(raiz->conteudo == chave){
            return raiz;
        }else{
            if(chave < raiz->conteudo){
                return buscar(raiz->esquerdo, chave);
            }else{
                return buscar(raiz->direita, chave);
            }
        }
    }
}

No* remover(No *raiz, int chave){
    if(raiz == NULL){
        return NULL;
    }else{
        if(raiz->conteudo == chave){
            //Remove nós folhas (nós sem filhos)
            if(raiz->esquerdo == NULL && raiz->direita == NULL){
                free(raiz);
                return NULL;
            }else{
                // remover nós que possuem apenas 1 filho
                if(raiz->esquerdo == NULL || raiz->direita == NULL){
                    No *aux;
                    if(raiz->esquerdo != NULL){
                        aux = raiz->esquerdo;
                    }else{
                        aux = raiz->direita;
                    }
                    free(raiz);
                    raiz = NULL;
                    return aux;
                }else{
                    No *aux = raiz->esquerdo;
                    while(aux->direita != NULL){
                        aux = aux->direita;
                    }
                    raiz->conteudo = aux->conteudo;
                    aux->conteudo = chave;
                    raiz->esquerdo = remover(raiz->esquerdo, chave);
                    return raiz;
                }
            }
        }else{
            if(chave < raiz->conteudo){
                raiz->esquerdo = remover(raiz->esquerdo, chave);
            }else{
                raiz->direita = remover(raiz->direita, chave);
            }
            return raiz;
        }
    }
}

void imprimir(No *raiz){
    if(raiz != NULL){
        imprimir(raiz->esquerdo);
        unidadeDaListagem(raiz->conteudo, raiz->nome, raiz->n1, raiz->n2);
        imprimir(raiz->direita);
    }
}

int main(){
        int op, op1, buscarID, ID=1, valor;
        char nome[TAM_MAX_NAME];

        ArvB arv;
        arv.raiz = NULL;

        No *raiz = NULL;
        do{
            system("CLS");
            op = menuPrincipal();

            switch(op){
                case '0':
                    printf("\n\n  Saindo.....\n");
                    sleep(3);
                    break;
                case '1':
                    do{
                        cabecalhoSubMenuAdcionar();

                        printf("\n  Digite o Nome do Aluno: ");
                        fflush(stdin);
                        gets( nome );

                        raiz = inserir(raiz, ID++, nome);

                        while(true){
                            printf("\n");
                            printf("  1 - Matricular outro Aluno\n");
                            printf("  0 - Voltar para o menu principal\n\n");

                            printf("  Selecionar: ");
                            fflush(stdin);
                            op1 = getchar();

                            if(op1 == '0' || op1 == '1'){
                                break;
                            }
                            printf("  Opcao invalida, apenas 1 ou 0: \n");
                            sleep(2);
                        }
                    }while(op1 != '0');
                    break;
                case '2':{
                    do{
                        cabecalhoSubMenuBuscarConvidados();
                        printf("  ID do aluno: ");
                        cin >> buscarID;
                        No *temp = buscar(raiz,  buscarID);


                        if((temp != NULL)){
                            while(true){
                                cabecalhoConvidados();
                                unidadeDaListagem(temp->conteudo, temp->nome, temp->n1, temp->n2);

                                printf("\n");
                                printf("  1 - Alterar Nome\n");
                                printf("  2 - Alterar/Adicionar N1\n");
                                printf("  3 - Alterar/Adicionar N2\n");
                                printf("  4 - Remover aluno\n");
                                printf("  0 - Voltar para o menu\n\n");

                                printf("  Selecionar: ");
                                fflush(stdin);
                                op1 = getchar();

                                if(op1 == '1'){
                                    printf("\n\n  Digite o novo nome: ");
                                    fflush(stdin);
                                    gets( nome );
                                    strcpy(temp->nome, nome);
                                    op1 = '0';
                                }else if(op1 == '2'){
                                    cout << "\n\n  N1: ";
                                    fflush(stdin);
                                    temp->n1 = pegarNota();
                                    op1 = '0';
                                }else if(op1 == '3'){
                                    cout << "\n\n  N2: ";
                                    fflush(stdin);
                                    temp->n2 = pegarNota();
                                    op1 = '0';
                                }else if(op1 == '4'){
                                    raiz = remover(raiz, buscarID);
                                    printf("\n\n  Removendo aluno...");
                                    sleep(3);
                                    op1 = '0';
                                }

                                if(op1 == '0' || op1 == '1'){
                                    break;
                                }
                                printf("  Opcao invalida, apenas 1 ou 0: \n");
                                sleep(2);
                            }
                        }else{
                            cabecalhoConvidados();
                            unidadeDaListagem(00, "ID NAO ENCONTRADO", -1, -1);
                            sleep(3);
                            op1 = '0';
                        }
                    }while(op1 != '0');
                    break;
                    }
                case '3':
                    cabecalhoSubMenuListaConvidados();
                    cabecalhoConvidados();
                    imprimir(raiz);

                    printf("\n\n  Aperte enter para continuar..." );
                    fflush(stdin);
                    op1 = getchar();
                    break;
                default:
                    printf("\n  Codigo invalido....\n");
                    break;
            }
        }while(op != '0');
}
