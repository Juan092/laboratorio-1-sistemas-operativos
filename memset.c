#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <wchar.h>

#define RESERVAR_MAS 1 

int main(){

        //declaración de un arreglo dinámico de enteros:
        int* int_dyn_arr;

        int tam_inicial; // tamaño inicial
        int incremento;

        //incremento de memoria (entero)

//reserve un espacio en memoria inicial para 5 enteros:

        int sel = RESERVAR_MAS;
        int aumento_reserva = 0;
        printf("\nCuánta memoria inicial desea tener?");
        scanf("%d",&tam_inicial);
        int_dyn_arr = (int *) malloc( tam_inicial * sizeof(int)*1024);



        do{
        printf("\nDesea reservar más memoria?");
        scanf("%d",&sel);
        if(sel == RESERVAR_MAS)
        {
                printf("\nCuantos elementos desea agregar?");
                scanf("%d",&incremento);
        }

        //reasignar memoria:
        int_dyn_arr = realloc(int_dyn_arr,incremento* sizeof(int));

wmemset(int_dyn_arr, 0, incremento);
        }while(sel == RESERVAR_MAS);
}
