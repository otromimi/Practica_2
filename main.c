#include <stdio.h>
#include <stdlib.h>


int menu();



int main(){

    int opcion;
    do{
        opcion=menu();
        switch(opcion){
            case 0:
                break;
            case 1:
                system("cls");
                printf("\n\tOPCION 1.- COMBREOBAR EL ULTIMO NUMERO\n\n");
                printf("---------------------------------------------------------");
                printf("\n\n Introduzca una secuencia de numeros positivos..\n <Un numero en cada linea, 0 para terminar>\n\n");
                opcion1();
                system("pause");
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

    }while(opcion!=0);

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



int opcion1(){

    int num;

    printf("\r Introduce un numero: ");
    scanf("%i",&num);
    if(num<0){
        //printf("\r");
        opcion1();
    }else{
        printf("\n");
        if(num=0){
            printf("\n\n\tEl ultimo valor es %i",num);
        }else{
            opcion1();
        }
    }
 return num;
}

void opcion2(){}

void opcion3(){}

void opcion4(){}

