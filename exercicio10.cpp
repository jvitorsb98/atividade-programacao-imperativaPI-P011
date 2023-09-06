#include<iostream>

using namespace std;

int* checaPosicoes(string, char , int&);

int main(){

    string palavra = "programacao";
    char caracter = 'a';
    int qntdCaracteres = 0;

    int* posicoes = checaPosicoes(palavra,caracter,qntdCaracteres);

    for(int i = 0 ; i < qntdCaracteres ; i++){
        cout << posicoes[i] << endl;
    }
    
    return 0;
}

int* checaPosicoes(string palavra, char caracter, int &qntdCaracteres){
    for(int i = 0 ; i < palavra.length() ; i++){
        if(palavra[i] == caracter){
            qntdCaracteres++;
        }
    }
    int* posicoes = new int[qntdCaracteres];
    int pos=0;

    for(int i = 0 ; i < palavra.length() ; i++){
        if(palavra[i] == caracter){
            posicoes[pos] = i;
            pos++;
        }
    }

    return posicoes;

}