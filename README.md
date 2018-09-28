# Obtener-numeros-aleatorios-en-C-en-Decimales
Tus programas generen números aleatorios para automatizar el proceso de llenar arreglos y todo eso.

Así que lo primero que tenemos que hacer es incluir la librería:

#include <stdio.h> <br>
#include <stdlib.h> <br>
#include <tgmath.h>  <br>
#include <time.h> <br>


//Declaración de variables
    double   num = 0;
    double   resultado = 0;     
    
    printf("Ingresa un numero limite (1 < 100): ");
    scanf("%lf", &num);
    printf("\n");
    
    
Luego inicializar los números aleatorios incluyendo esto: <br>
srand(time(NULL)); <br> 
    
De forma general es: <br>
variable_de_resultado = limite_inferior + rand() / (RAND_MAX + 1u) / variable_del_usuario - limite_inferior) ; <br>

