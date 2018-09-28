/*  # Obtener-numeros-aleatorios-en-C-en-Decimales 
    #cristophero.alvarado@gmail.com
    ArchLinux                      */ 

#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>
#include <time.h>


int main()
{
    //Declaración de variables
    char     avanzar;
    double   num = 0;
    double   resultado = 0;            

    do {

    //Entrada de datos
    printf("Ingresa un numero limite (1 < ∞): ");
    scanf("%lf", &num);
    printf("\n");

    //Procesamiento
    srand(time(NULL));
    
    for (int numero_azar = 1, lista_num = 0; numero_azar <= 10 && lista_num <= 10; numero_azar++, lista_num++)
    {
        
        resultado = 0.01+rand()/((RAND_MAX + 1u)/num-1.0); 
    /*https://en.cppreference.com/w/c/numeric/random/rand */
        printf("El numero %i resultado al azar es: %.2lf \n", lista_num, resultado);
    }

    printf("\n\n   Repetir Programa (S)o(N)?: ");
    scanf(" %c", &avanzar);
    system ("clear"); /*linux - windows cls*/
    } while (avanzar == 'S' || avanzar == 's');
        
    printf("\n\n\n\n\n\n\t\t\tGracias por probarlo\n");
    printf("\r");
    
    

}