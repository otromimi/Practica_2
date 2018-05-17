#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


int menu();
void opcion1(int cont,int last);
void opcion2();
void opcion3();
void opcion4(int suma,int first_num);

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
                opcion1(0,0);
                break;
            case 2:
                system("cls");
                printf("\n\tOPCION 2.- SECUENCIA INVERTIDA Y REPLICADA PARCIALMENTE\n\n");
                printf("---------------------------------------------------------");
                printf("\n\n Introduzca una secuencia de numeros positivos, 0 para terminar.\n\t");
                opcion2();
                printf("\n\n\t");
                system("pause");
                break;
            case 3:
                system("cls");
                printf("\n\tOPCION 3.- SECUENCIA INVERTIDA Y REPLICADA TOTALMENTE\n\n");
                printf("---------------------------------------------------------");
                printf("\n\n Introduzca una secuencia de numeros positivos, 0 para terminar.\n\t");
                opcion3();
                printf("\n\n\t");
                system("pause");
                break;
            case 4:
                system("cls");
                printf("\n\tOPCION 4.- COMPROBAR PRIMER NUMERO Y SUMA\n\n");
                printf("---------------------------------------------------------");
                printf("\n\n Introduzca una secuencia de numeros positivos..\n <Un numero en cada linea, 0 para terminar>\n\n");
                opcion4(0,0);
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



void opcion1(int cont,int last){

    int num=0;
    char relacion[6];

    printf("\n Introduce un numero: ");
    scanf("%i",&num);
    if(num<0){
        printf("\t\t\tNumero invalido.\n");
        opcion1(cont,last);
    }else if(num>0){
        cont++;
        last=num;
        opcion1(cont,num);
    }else{
        if(cont-1<last){
            strcpy(relacion,"MAYOR");
        }else if(cont-1>last){
            strcpy(relacion,"MENOR");
        }else{
            strcpy(relacion,"IGUAL");
        }
        printf("\n\n\tEl ultimo valor introducido %i, es %s de la cantidad de numeros positivos %i.\n\n  ",last,relacion,cont-1);
        system("pause");
    }
}

void opcion2(int last_num){

    int i,num=0;

    scanf("%i",&num);
    if(num<0){
        opcion2(last_num);
    }else if(num>0){
        opcion2(num);
        printf("%i ",num);
    }else{
        printf("\n\n\t");
        printf("La secuencia es: ");
        for(i=0;i<last_num-1;i++){
                printf("%i ",last_num);
        }
    }
}

void opcion3(){

     int i,num=0;

    scanf("%i",&num);
    if(num<0){
        opcion3();
    }else if(num>0){
        opcion3();
        for(i=0;i<num;i++){
            printf("%i ",num);
        }
    }else{
        printf("\n\n\t");
        printf("La secuencia es: ");

    }
}

void opcion4(int suma,int first_num){

    int num;
    char relacion[6];

    printf("\n Introduce un numero: ");
    scanf("%i",&num);
    if(num<0){
        printf("\t\t\tNumero invalido.\n");
        opcion4(suma,first_num);
    }else if(num>0){
        if(suma==0){
            first_num=num;
        }
        suma+=num;
        opcion4(suma,first_num);
    }else{
        if(first_num<(suma-first_num)){
            strcpy(relacion,"MAYOR");
        }else if(first_num>(suma-first_num)){
            strcpy(relacion,"MENOR");
        }else{
            strcpy(relacion,"IGUAL");
        }
        printf("\n\n  La suma de los elementos inttroducidos <%i>, menos el primero es %s que el primer elemento <%i>",suma-first_num,relacion,first_num);
        printf("\n\n\t");
        system("pause");
    }

}






