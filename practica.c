#include <stdio.h>
int main() {
//declaramos las variables a utilizar
double d , e , f = 2.33 ;
int i = 6 ;
//estamos multiplicando las variables f e i
e = f * i ; 
printf( "Resultado = %f\n", e); //mostramos el resultado que conseguimos realizando el procedimiento 
d = (int) ( f * i ) ; 
//tenemos un valor entero
printf( "Resultado = %f\n", d);
d = (int) f * i ; 
printf( "Resultado = %f\n", d); //imprimimos el resultado 
return 0;
}
