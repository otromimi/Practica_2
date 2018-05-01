#include <stdio.h>
#include <stdlib.h>


int menu();



int main(){

    switch(menu()){
        case 0:
            break;
        case 1:
            system("cls");
            printf("opcion 1");
            break;
        case 2:
            system("cls");
            printf("opcion 2");
            break;
        case 3:
            system("cls");
            printf("opcion 3");
            break;
        case 4:
            system("cls");
            printf("opcion 4");
            break;
    }

}


int menu(){

    int opcion;

    system("cls");
    printf("\n\tMENU PRINCIPAL\n\n\t1.-Combrobar ultimo numero\n\t2.-Escribir secuencia invertida y replicada parcialmente\n\t3.-Escribir secuencia invertida y replicada totalmente\n\t4.-Comprobar primer numero y suma\n\n\t0.-Salir\n\n\t->");
    scanf("%i",&opcion);
    if(opcion<0||opcion>4){
        system("cls");
        system("color 4");
        printf("\n\tLa opcion seleccionada no es valida.\n\n ");
        system("pause");
        system("color 7");
        opcion=menu();
    }
    return opcion;
}



void opcion1(){}

void opcion2(){}

void opcion3(){}

void opcion4(){}

