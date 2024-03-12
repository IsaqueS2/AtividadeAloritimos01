
#include <iostream>
#include<stdlib.h>
using namespace std;

main(){
  float salario = 350;
  char nomeVendedor[20];
  float quantCarrosVendidos;
  float valorTotalVendas;
  float salarioTotalVendedor;
  float valorCarrosVendidos;
  
  cout << "Digite o nome do vendedor: ";
  cin >> nomeVendedor;
  
  cout << "Digite o total de carros vendidos: ";
  cin >> quantCarrosVendidos;
  
  cout << "Digite o valor dos carros vendidos: " << "\n";
  cin >> valorCarrosVendidos;
  
  valorTotalVendas = quantCarrosVendidos * valorCarrosVendidos;
  float comissao = (quantCarrosVendidos * 50) + (valorTotalVendas * 0.05 );
  salarioTotalVendedor = comissao + salario;
  
    cout << "Vendedor: " << nomeVendedor << "\n";
    cout << "Total de carros vendidos: " << quantCarrosVendidos << "\n";
    cout << "Valor de cada carro vendido: " << valorCarrosVendidos << "\n";
    cout << "Valor total de carros vendidos: " << valorTotalVendas << "\n"; 
    cout << "Salário total do vendedor com comissão: " << salarioTotalVendedor << "\n"; 
  
}

