#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int menu();



int main(){

    int opcion,cont,last;
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
                cont=0;
                last=opcion1(&cont);
                printf("\n\n\tSe introducieron %i numeros con el ultimo valor %i.\n\n  ",cont,last);
                system("pause");
                break;
            case 2:
                system("cls");
                printf("\n\tOPCION 2.- SECUENCIA INVERTIDA Y REPLICADA PARCIALMENTE\n\n");
                printf("---------------------------------------------------------");
                printf("\n\n Introduzca una secuencia de numeros positivos, 0 para terminar.\n\t");
                opcion2();
                system("pause");
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



int opcion1(int *p_cont){

    int num=0,last=0;

    printf("\n Introduce un numero: ");
    scanf("%i",&num);
    if(num<0){
        printf("\t\t\tNumero invalido.\n");
        opcion1(p_cont);
    }else if(num>0){
        ++*p_cont;
        last=opcion1(p_cont);
        if(last==0){
            return num;
        }else{
            return last;
        }
    }else{
        return num;
    }
}

int opcion2(){

    int i,num=0,devuelto=0;


    scanf("%i",&num);
    if(num<0){
        opcion2();
    }else if(num>0){

        devuelto=opcion2();
        if(devuelto==0){
            for(i=0;i<num;i++){
                printf("%i ",num);
            }
        }else{
            printf("%i ",num);
        }
    }else{
        printf("%i\n\n\t",0);
        printf("La secuencia es: ");
        return num;
    }


}

void opcion3(){}

void opcion4(){}

