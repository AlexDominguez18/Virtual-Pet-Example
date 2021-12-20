/*Oscar Alejandro Domínguez Duran-Edgar Noé Lopez Gúzman
  Teoría de la computación - Abelardo Gómez Andrade*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include "Impresiones_Mascota.h"

char* estadoActual;
char* salida;
char nombrePerro[50];
char* estados[8][5];
char* salidas[8][5];


void inicializarTablaEstados();
void inicializarTablaSalidas();
int estadoSiguiente(int estado,int entrada);
void generarSalida(int estado,int entrada);

int main()
{
    int i,estado,entrada,continuarPrograma=1;
    setlocale(LC_ALL,"spanish");
    inicializarTablaEstados();
    inicializarTablaSalidas();
    estado=TRANQUILO;
    estadoActual=estados[0][0];
    printf("¡BIENVENIDO AMIGO!\n\n");
    printf("Ingresa el nombre de perro virtual: ");
    scanf("%[^\n]*c",nombrePerro);
    getchar();
    printf("\nGenerando a \"%s\"",nombrePerro);
    for (i=0;i<3;i++){
        printf(" . ");
        Sleep(500);
    }
    printf("\n\nSe ha creado a tu mascota:\n\n");
    imprimirPerro();
    printf("\nPresione ENTER para interacturar con el...");
    getchar();
    do
    {
        system("cls");
        printf("%s está: %s\n\n",nombrePerro,estadoActual);
        printf("Ingresa una de las opciones para interactuar con %s:\n\n",nombrePerro);
        imprimirEstadoPerro(estado);
        printf("\n1.-Alimentarlo");
        printf("\t2.-Hidratarlo");
        printf("\t3.-Acariciarlo");
        printf("\t4.-Jugar con el");
        printf("\t5.-Ignorarlo\n");
        printf("6.-Despedirte de %s\n",nombrePerro);
        printf("\nOpción: ");
        scanf("%i",&entrada);
        if (entrada>=1 && entrada<6){
            generarSalida(estado,entrada);
            estado=estadoSiguiente(estado,entrada);
        }
        else if (entrada==6){
            continuarPrograma=0;
        }
        else printf("\n¡Opción inválida!");  getchar();
        if (continuarPrograma)
            printf("\n\nPresione enter para volver a interactuar...");
        else
            printf("\n¡Hasta la próxima! ;D");
        getchar();
    }while(continuarPrograma);
    return 0;
}

void inicializarTablaEstados(){
    estados[0][0]="Tranquilo";
    estados[0][1]="Tranquilo";
    estados[0][2]="Feliz";
    estados[0][3]="Feliz";
    estados[0][4]="Triste";
    estados[1][0]="Tranquilo";
    estados[1][1]="Tranquilo";
    estados[1][2]="Feliz";
    estados[1][3]="Feliz";
    estados[1][4]="Triste";
    estados[2][0]="Triste";
    estados[2][1]="Tranquilo";
    estados[2][2]="Feliz";
    estados[2][3]="Feliz";
    estados[2][4]="Enojado";
    estados[3][0]="Feliz";
    estados[3][1]="Enojado";
    estados[3][2]="Enojado";
    estados[3][3]="Enojado";
    estados[3][4]="Hambriento";
    estados[4][0]="Feliz";
    estados[4][1]="Hambriento";
    estados[4][2]="Hambriento";
    estados[4][3]="Hambriento";
    estados[4][4]="Sediento";
    estados[5][0]="Sediento";
    estados[5][1]="Feliz";
    estados[5][2]="Sediento";
    estados[5][3]="Sediento";
    estados[5][4]="Enfermo";
    estados[6][0]="Sediento";
    estados[6][1]="Hambriento";
    estados[6][2]="Enfermo";
    estados[6][3]="Enfermo";
    estados[6][4]="Muerto";
    estados[7][0]="Muerto";
    estados[7][1]="Muerto";
    estados[7][2]="Muerto";
    estados[7][3]="Muerto";
    estados[7][4]="Muerto";
}

void inicializarTablaSalidas(){
    salidas[0][0]="Movió la cola";
    salidas[0][1]="Movió la cola";
    salidas[0][2]="Ha rodado";
    salidas[0][3]="Ha rodado";
    salidas[0][4]="Aulló";
    salidas[1][0]="Hizo nada";
    salidas[1][1]="Hizo nada";
    salidas[1][2]="Movió la cola";
    salidas[1][3]="Ha rodado";
    salidas[1][4]="Aulló";
    salidas[2][0]="Aulló";
    salidas[2][1]="Aulló";
    salidas[2][2]="Movió la cola";
    salidas[2][3]="Movió la cola";
    salidas[2][4]="Ha ladrado";
    salidas[3][0]="Movió la cola";
    salidas[3][1]="Ha ladrado";
    salidas[3][2]="Ha ladrado";
    salidas[3][3]="Ha ladrado";
    salidas[3][4]="Aulló";
    salidas[4][0]="Ha rodado";
    salidas[4][1]="Hizo nada";
    salidas[4][2]="Aulló";
    salidas[4][3]="Ha ladrado";
    salidas[4][4]="Ha ladrado";
    salidas[5][0]="Ha ladrado";
    salidas[5][1]="Movió la cola";
    salidas[5][2]="Hizo nada";
    salidas[5][3]="Hizo nada";
    salidas[5][4]="Aulló";
    salidas[6][0]="Movió la cola";
    salidas[6][1]="Movió la cola";
    salidas[6][2]="Aulló";
    salidas[6][3]="Aulló";
    salidas[6][4]="Hizo nada";
    salidas[7][0]="Hizo nada";
    salidas[7][1]="Hizo nada";
    salidas[7][2]="Hizo nada";
    salidas[7][3]="Hizo nada";
    salidas[7][4]="Hizo nada";
}

void generarSalida(int estado,int entrada){
    salida=salidas[estado-1][entrada-1];
    printf("\n%s: %s",nombrePerro,salida);
}

int estadoSiguiente(int estado,int entrada){
    estadoActual=estados[estado-1][entrada-1];
    if (strcmp(estadoActual,"Tranquilo")==0)
        estado=TRANQUILO;
    else if (strcmp(estadoActual,"Feliz")==0)
        estado=FELIZ;
    else if (strcmp(estadoActual,"Triste")==0)
        estado=TRISTE;
    else if (strcmp(estadoActual,"Enojado")==0)
        estado=ENOJADO;
    else if (strcmp(estadoActual,"Hambriento")==0)
        estado=HAMBRIENTO;
    else if (strcmp(estadoActual,"Sediento")==0)
        estado=SEDIENTO;
    else if (strcmp(estadoActual,"Enfermo")==0)
        estado=ENFERMO;
    else if (strcmp(estadoActual,"Muerto")==0)
        estado=MUERTO;
    else estado=0;
    return estado;
}
