#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cstdlib>
using namespace std; 

int main(void)
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;
    
    cout<<"Qual a altura ? \n" ;
    cin >>a;

    cout<<"Qual a base ? \n" ;
    cin >>b;
    
    c = a*b;
    
    cout <<"Área do Triângulo :"<< c; 
    cout <<"\n"; 
    
    system("pause");
}
