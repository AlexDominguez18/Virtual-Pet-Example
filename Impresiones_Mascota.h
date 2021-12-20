#ifndef IMPRESIONES_MASCOTA_H_INCLUDED
#define IMPRESIONES_MASCOTA_H_INCLUDED

#include <stdio.h>

enum {TRANQUILO=1,FELIZ,TRISTE,ENOJADO,HAMBRIENTO,SEDIENTO,ENFERMO,MUERTO,DEFAULT};

void imprimirPerro(){
    printf("/^-----^\\\n"
           "V  o o  V\n"
           " |  Y  |\n"
           "  \\ - /\n"
           "  / - \\\n"
           "  |    \\\n"
           "  |     \\ \n"
           "  || (___\\\n");
}

void imprimirPerroFeliz(){
    printf("/^-----^\\\n"
           "V  o o  V\n"
           " |  Y  |\n"
           "  \\ W /\n"
           "  / - \\\n"
           "  |    \\\n"
           "  |     \\ \n"
           "  || (___\\\n");
}

void imprimirPerroTriste(){
    printf("/^-----^\\\n"
           "V  o o  V\n"
           " |  Y  |\n"
           "  \\ n /\n"
           "  / - \\\n"
           "  |    \\\n"
           "  |     \\ \n"
           "  || (___\\\n");
}

void imprimirPerroEnojado(){
    printf("/^-----^\\\n"
           "V  T T  V\n"
           " |  Y  |\n"
           "  \\ M /\n"
           "  / - \\\n"
           "  |    \\\n"
           "  |     \\ \n"
           "  || (___\\\n");
}

void imprimirPerroHambriento(){
    printf("/^-----^\\\n"
           "V  U U  V\n"
           " |  Y  |\n"
           "  \\ O /\n"
           "  / - \\\n"
           "  |    \\\n"
           "  |     \\ \n"
           "  || (___\\\n");
}

void imprimirPerroSediento(){
    printf("/^-----^\\\n"
           "V  - -  V\n"
           " |  Y  |\n"
           "  \\ 3 /\n"
           "  / - \\\n"
           "  |    \\\n"
           "  |     \\ \n"
           "  || (___\\\n");
}

void imprimirPerroEnfermo(){
    printf("/^-----^\\\n"
           "V  > <  V\n"
           " |  Y  |\n"
           "  \\ O /\n"
           "  / - \\\n"
           "  |    \\\n"
           "  |     \\ \n"
           "  || (___\\\n");
}

void imprimirPerroMuerto(){
    printf("/^-----^\\\n"
           "V  X X  V\n"
           " |  Y  |\n"
           "  \\ P /\n"
           "  / - \\\n"
           "  |    \\\n"
           "  |     \\ \n"
           "  || (___\\\n");
}

void imprimirEstadoPerro(int Estado){
    switch(Estado){
    case TRANQUILO:
        imprimirPerro();
        break;
    case FELIZ:
        imprimirPerroFeliz();
        break;
    case TRISTE:
        imprimirPerroTriste();
        break;
    case ENOJADO:
        imprimirPerroEnojado();
        break;
    case HAMBRIENTO:
        imprimirPerroHambriento();
        break;
    case SEDIENTO:
        imprimirPerroSediento();
        break;
    case ENFERMO:
        imprimirPerroEnfermo();
        break;
    default:
        imprimirPerroMuerto();
    }
}

#endif // IMPRESIONES_MASCOTA_H_INCLUDED
