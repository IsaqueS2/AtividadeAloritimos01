
#include <iostream>
#include<stdlib.h>
using namespace std;

main(){
      float valorDolar;
      float cotacao = 4.98;
 
      
      cout << "Digite o valor em dolar: ";
      cin >> valorDolar;
      
      float valorEmReal = valorDolar * cotacao;
      
      cout << "O valor em reais é de: " << valorEmReal;
      
}

