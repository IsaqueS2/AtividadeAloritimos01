
#include <iostream>
#include<stdlib.h>
using namespace std;

main(){
     
      float picole1= 0.50, picole2=0.60, picole3 = 0.75;
      float quantidadeVendidaPicole1,quantidadeVendidaPicole2,quantidadeVendidaPicole3, totalArrecadadoPicole1, totalArrecadadoPicole2, totalArrecadadoPicole3 ;
      
      cout << "\n" << "Digite a quantidade de picoles de 50 centavos que foram comprados: " << "\n";
      cin >> quantidadeVendidaPicole1;
      
     totalArrecadadoPicole1 = quantidadeVendidaPicole1 * picole1;
     
      cout <<"\n" << "Digite a quantidade de picoles de 60 centavos que foram comprados: " << "\n";
      cin >> quantidadeVendidaPicole2;
      
     totalArrecadadoPicole2 = quantidadeVendidaPicole2 * picole2;
     
      cout <<"\n" <<"Digite a quantidade de picoles de 75 centavos que foram comprados: " << "\n";
      cin >> quantidadeVendidaPicole3;
       
	 cout << "\n" << "---------------------------------------------------------------------------" << "\n";
     totalArrecadadoPicole3 = quantidadeVendidaPicole3 * picole3;
     
           cout << "\n" << "O total de picoles de 50 centavos vendidos foi de " << quantidadeVendidaPicole1 << " e o valor total foi de " << totalArrecadadoPicole1 << "\n";
           cout << "\n" << "O total de picoles de 60 centavos vendidos foi de " << quantidadeVendidaPicole2 << " e o valor total foi de " << totalArrecadadoPicole2 << "\n";
           cout << "\n" << "O total de picoles de 75 centavos vendidos foi de " << quantidadeVendidaPicole3 << " e o valor total foi de " << totalArrecadadoPicole3 << "\n";
           
           
}

