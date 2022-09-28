#include <bits/stdc++.h>
using namespace std;
#include <unistd.h>

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
    // arranjo
    int n, p, arranjoFinal;
    // permutação simples
    int n2, permutacaoSimplesFinal; 
    // permutação com elementos repetidos
    int n3, numeroDeTermosRepetidos, resultadoDenominador=1, permutacaoElementosRepetidosFinal;
    // permutação circular
    int n4, permutacaoCircularFinal;
    // combinação
    int n5, p5, combinacaoFinal;

    string choise;
    cout << "AR = Arranjo" << endl;
    cout << "PS = Permutacao Simples" << endl;
    cout << "PCER = Permutacao com Elementos Repetidos" << endl;
    cout << "PC = Permutacao Circular" << endl;
    cout << "CO = Combinacao" << endl;
    cout << "Selecione o tipo de agrupamento: ";
    cin >> choise;

    if (choise == "AR"){
        cout << "Formula -> A(n,p) = n!/(n - p)!" << endl;
        cout << "Valor do 'n': ";
        cin >> n;
        cout << "Valor do 'p': ";
        cin >> p;
        arranjoFinal = ((fatorial(n))/(fatorial(n-p)));
        cout << "Numero de Arranjos Possiveis: " << arranjoFinal << endl;
    }

    else if(choise == "PS"){
        cout << "Formula -> P(n) = n!" << endl;
        cout << "Valor do 'n': ";
        cin >> n2;
        permutacaoSimplesFinal = fatorial(n2);
        cout << "Numero de Permutacoes Possiveis: " << permutacaoSimplesFinal << endl;
    }

    else if(choise == "PCER"){
        cout << "Formula -> P(n)(a,b,c...) = n!/a! . b! . c! . ..." << endl;
        cout << "Numero de Termos que se Repetem: ";
        cin >> numeroDeTermosRepetidos;
        int termosRepetidos[numeroDeTermosRepetidos];
        for (int i=1;i<=numeroDeTermosRepetidos;i++){
            cout << "Valor " << i << " que se repete: ";
            cin >> termosRepetidos[i];
            resultadoDenominador *= fatorial(termosRepetidos[i]);
        }
        cout << "Valor do 'n': ";
        cin >> n3;
        permutacaoElementosRepetidosFinal = ((fatorial(n3))/(resultadoDenominador));
        cout << "Numero de Permutacoes Possiveis: " << permutacaoElementosRepetidosFinal << endl;
    }

    else if(choise == "PC"){
        cout << "Formula -> PC(n) = (n-1)!" << endl;
        cout << "Valor do 'n': ";
        cin >> n4;
        permutacaoCircularFinal = fatorial((n4-1));
        cout << "Numero de Permutacoes Possiveis: " << permutacaoCircularFinal << endl;
    }

    else if(choise == "CO"){
        cout << "Formula -> C(n,p) = n!/(n-p)! . p!" << endl;
        cout << "Valor do 'n': ";
        cin >> n5;
        cout << "Valor do 'p': ";
        cin >> p5;
        combinacaoFinal = ((fatorial(n5))/((fatorial(n5 - p5))*(fatorial(p5))));
        cout << "Numero de Combinacoes Possiveis: " << combinacaoFinal << endl;
    }

    else{
        cout << "Opcao escolhida nao existe! :)" << endl;
    }
    
    sleep(5);
}