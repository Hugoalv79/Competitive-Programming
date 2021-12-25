#include<math.h>


bool isLucky(int n) 
{
    int digits = (int)log10(n) + 1;
    int sum1=0, sum2=0;
    
    for (int i=0; n>0; n/=10,i++) 
        {
            if(i<digits/2)
                sum1 += n%10;
            else
                sum2 += n%10;
        }
    
    return sum1 == sum2;
}

// #include <iostream>
// #include <string>
 
// using namespace std;
 
// int main ()
// {
//   string cad1="Esta es mi primer cadena";
 
//   //Obtengo una subcadena a partir del caracter 12
//   string cad2 = cad1.substr (12);
 
//   //Obtengo una subcadena a partir del caracter 0 y con una longitud de 4
//   string cad3 = cad1.substr(0,4);
 
//   //Busco un texto dentro de la cadena y obtengo la posicion
//   int pos = str.find("mi");
 
//   //Obtengo una subcadena a partir del texto mi
//   string cad4 = cad1.substr (pos); 
 
//   return 0;
// }