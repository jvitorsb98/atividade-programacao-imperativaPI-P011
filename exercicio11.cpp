#include<iostream>
#include<string>

using namespace std;

string codifica(string);
string decodifica(string);

int main(){

    string palavra = "Estruturas de Dados";

    cout << codifica(palavra) << endl;
    cout << decodifica(codifica(palavra)) << endl;


    return 0;
}

string codifica(string palavra){

    for(int i = 0 ; i < palavra.length() ; i++){
        if(palavra[i] == 'z'){
            palavra[i] = 'a';
        }else if(palavra[i] == 'Z'){
            palavra[i] = 'A';
        }else if(palavra[i] == ' '){

        }else{
            palavra[i]+=1;
        }
    }
    return palavra;
}

string decodifica(string palavra){
    for(int i = 0 ; i < palavra.length() ; i++){
        if(palavra[i] == 'a'){
            palavra[i] = 'z';
        }else if(palavra[i] == 'A'){
            palavra[i] = 'Z';
        }else if(palavra[i] == ' '){

        }else{
            palavra[i]-=1;
        }
    }
    return palavra;
}