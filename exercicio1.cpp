#include<iostream>
#include <limits>
#include<ctime>

using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo);

int main(){

    srand(time(0));

    int n = 50;
    int vetor[n];
    int maximo = numeric_limits<int>::min();
    int minimo = numeric_limits<int>::max();

    for(int i = 0 ; i < n ; i++){
        vetor[i] = rand()%20000;
    }

    maxmin(vetor,n,maximo,minimo);

    cout << "Maximo : " << maximo << endl;
    cout << "Minimo : " << minimo << endl;

    return 0;
}

void maxmin(int vetor[], int n, int &maximo, int &minimo){
    for(int i = 0 ; i < n ; i++){
        if(vetor[i] > maximo){
            maximo = vetor[i];
        }
        if(vetor[i] < minimo){
            minimo = vetor[i];
        }    
    }
}