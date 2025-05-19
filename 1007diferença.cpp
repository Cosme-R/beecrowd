//Leia quatro valores inteiros A, B, C e D. A seguir, 
//calcule e mostre a diferença do produto de A e B pelo
//produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).



#include <iostream>
#include <string>

#include <stdio.h>
using namespace std; 
int main() {

    int a=0;
    int b=0;
    int c=0;
    int d=0;


    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cout<<"DIFERENCA = "<<((a*b)-(c*d))<<endl;

    return 0;
}
