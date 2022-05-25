#include <assert.h>
#include <stdio.h>
#include "Conversion.h"
int main(void){
    printf("Prueba de Celsius a Farenheit \n");
    printf("Se prueba la funcion Celsius tiene un erro menor a 0.5 F \n");
    assert( 0.5 > (Celsius(40) - (40/9)));
    printf("Todo esta bien \n");
    printf("Prueba de Farenheit a Celsius \n");
    printf("Se prueba la funcion Farenheit tiene un erro menor a  1C \n");
    assert( 0.7 > (Farenheit(42) - (538/5)));
    printf("Todo esta bien ");
    return 0;
}