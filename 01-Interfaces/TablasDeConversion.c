#include <stdio.h>
#include "Conversion.h"
int main(void){
const int LOWER = 0; 
const int UPPER = 300; 
const int STEP = 20; 
     printf("Celsius->Farenheit\n");
    for(int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    { 
    printf("%3d %6.1f\n", fahr, Celsius(fahr) );
    } 
     printf("Celsius->Farenheit\n");
const int LOWERCelsius = 0; 
const int UPPERCelsius = 300; 
const int STEPCelsius = 20; 
    printf("Farenheit->Celsius\n");
    for(int Cel = LOWERCelsius; Cel <= UPPERCelsius; Cel = Cel + STEPCelsius)
    { 
    printf("%3d %6.1f\n", Cel, Farenheit(Cel) );
    }
    return 0;
}