#include <stdio.h>

struct pelicula{
char fecha[40];
char genero[20];
int duracion;
char estudio[15];
char director[15];
int horarios[15]
};

void imprimircartelera();
void imprimirprecios();
void buscarpelicula();
void seleccionar();

void main() {
    int menu;
    printf("Menu Cine X\n1)Cartelera\n2)Precio por Salas\n3)Buscar Pelicula\n4)Seleccionar Pelicula y Sala\n5)Salir\n");
    scanf("%d", &menu);
    switch(menu){
        case 1:
            imprimircartelera();
            break;
        case 2:
            imprimirprecios();
            break;
        case 3:
            buscarpelicula();
            break;
        case 4:
            seleccionar();
            break;
        case 5:
            return 0;
    }
    return 0;
}

void imprimircartelera(){
        struct pelicula cartelera1;
        cartelera1.fecha="26/04/2019";
        cartelera1.genero="Accion";
        cartelera1.duracion=181;
        cartelera1.estudio)="Marvel";
        cartelera1.director="Anthony y Joe Russo";
        cartelera1.horarios[0]=11;
        cartelera1.horarios[1]=12;
        printf(cartelera1);
}

void imprimirprecios(){
    printf("Sala Normal 50$\nSala 3D 80$\nSala VIP 40$\n");
}

void buscarpelicula(){
}

void seleccionar(){
}


