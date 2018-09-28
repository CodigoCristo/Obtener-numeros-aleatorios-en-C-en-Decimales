/*  # Obtener-numeros-aleatorios-en-C-en-Decimales 
    #cristophero.alvarado@gmail.com
    ArchLinux                      */ 

#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>
#include <time.h>


int main () {
      
    double   num = 0;
    double   resultado = 0;    
    
    printf("Ingresa un numero limite (1 < 100): ");
    scanf("%lf", &num);
    printf("\n");
    
    srand(time(NULL));
    
    for (int numero_azar = 1, lista_num = 0; numero_azar <= 10 && lista_num <= 10; numero_azar++, lista_num++)
    {
        
        resultado = 0.01+rand()/((RAND_MAX + 1u)/num-1.0); 
        printf("El numero %i resultado al azar es: %.2lf \n", lista_num, resultado);
    }
        /*https://en.cppreference.com/w/c/numeric/random/rand */
        /*resultado = fmod( 0.1+(float)rand() , (num+0.1) - 1); */
        /*resultado = 0.01+(float)rand()/(RAND_MAX+1u)/num; */
    
    return 0;
}
