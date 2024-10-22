#include <stdio.h>
int main() {
//declaramos las variables a utilizar
double d , e , f = 2.33 ;
int i = 6 ;
//estamos multiplicando las variables 
e = f * i ; 
printf( "Resultado = %f\n", e); //mostramos el resultado 
d = (int) ( f * i ) ; 
//tenemos un valor entero
printf( "Resultado = %f\n", d);
d = (int) f * i ; 
printf( "Resultado = %f\n", d);
return 0;
}
