#include <bits/stdc++.h>
using namespace std;

int fatorial(int x){
    int res;
    if (x == 0){
        res = 1;
    }
    else{
        res = x * fatorial(x - 1);
    }
    return res;
}

int main(){
    // variaveis
    int n, p, arranjoFinal;

    string choise;
    cout << "AR = Arranjo" << endl;
    cout << "PS = Permutacao Simples" << endl;
    cout << "PCER = Permutacao com Elementos Repetidos" << endl;
    cout << "PC = Permutacao Circular" << endl;
    cout << "CO = Combinacao" << endl;
    cout << "Selecione o tipo de agrupamento: ";
    cin >> choise;
    cout << choise << endl;

    if (choise == "AR"){
        cout << "Formula -> A(n,p) = n!/(n - p)!" << endl;
        cout << "Valor do 'n': ";
        cin >> n;
        cout << "Valor do 'p': ";
        cin >> p;
        arranjoFinal = ((fatorial(n))/(fatorial(n-p)));
        cout << "Numero de Arranjos Possiveis: " << arranjoFinal << endl;
    }
}