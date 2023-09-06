#include<iostream>

using namespace std;

void multiplica_por_n(int *, int, int );
void preencheVetor(int * , int);

int main(){

    srand(time(0));

    int tam1 = rand()%20;
    int vetor1[tam1];
    preencheVetor(vetor1,tam1);
    int multiplicador = 5;

    multiplica_por_n(vetor1,tam1,multiplicador);

    return 0;
}

void preencheVetor(int *vetor ,int tam){
    for(int i = 0 ; i < tam ; i++){
        vetor[i] = rand()%100;
    }
}

void multiplica_por_n(int *vet, int qtde, int n){
    for(int i = 0 ; i < qtde ; i++){
        vet[i] *=n;
    }
}