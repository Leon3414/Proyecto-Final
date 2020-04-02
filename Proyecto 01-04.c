#include <stdio.h>

struct pelicula{
char titulo[20];
char fecha[40];
char genero[20];
int duracion;
char estudio[15];
char director[15];
char horarios[15]
};

void imprimircartelera(struct peilcula);
void imprimirprecios();
void buscarpelicula();
void seleccionar();
struct pelicula agregarpelicula(char fecha, char genero, int duracion, char estudio, char director, char horarios);
void eliminarpelicula();

void main() {
    struct pelicula.peliculas[9]
    int menu;
    int menucliente;
    int menuempleado;
    int indice=1;
    while (indice=1){
    scanf("%d", &menu)
    switch(menu){
        case 1:
            printf("Menu Cine X\n1)Cartelera\n2)Precio por Salas\n3)Buscar Pelicula\n4)Seleccionar Pelicula y Sala\n5)Salir\n");
            scanf("%d", &menucliente);
            switch(menucliente){
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
        break;
        case 2:
            printf("Menu Cine X Empleados\n1)Cartelera completa\n2)Agregar Pelicula\n3)Eliminar Pelicula\n4)Salir");
            scanf("%d", &menuempleado);
            switch(menuempleado){
                case 1:
                   imprimircartelera();
                   break;
                case 2:
                    agregarpelicula();
                    break;
                case 3:
                    eliminarpelicula();
                    break;
                case 4:
                    return 0;
            }
            break;
        }
    }
}

void imprimircartelera(char fecha, char genero, int duracion, char estudio, char director, char horarios){
     int indice1=0;
     while(indice1<=9){
        printf("Peicula: %s\n", peliculas.titulo[indice1]);
        printf("Fecha de estreno: %s\n", peliculas.titulo[indice1]);
        printf("Genero: %s\n", peliculas.genero[indice1]);
        printf("Duracion: %s minutos\n", peliculas.duracion[indice1]);
        printf("Estudio: %s\n", peliculas.estudio[indice1]);
        printf("Director: %s\n", peliculas.director[indice1]);
        printf("Horarios: %s\n", peliculas.horarios[indice1]);
        indice1++;
     }
}

void imprimirprecios(){
    printf("Sala Normal 50$\nSala 3D 80$\nSala VIP 40$\n");
}

void buscarpelicula(){
}

void seleccionar(){
}

struct pelicula agregarpelicula(char fecha, char genero, int duracion, char estudio, char director, char horarios){
        print("Ingrese Pelicula");
        scanf("%c", &peliculas.titulo[]);
        print("Ingrese titulo");
        scanf("%c", &peliculas.titulo[]);
        print("Ingrese Genero");
        scanf("%c", &peliculas.genero[]);
        print("Ingrese Duracion");
        scanf("%i", &peliculas.duracion[]);
        print("Ingrese Estudio");
        scanf("%c", &peliculas.estudio[]);
        print("Ingrese Director");
        scanf("%c", &peliculas.director[]);
        print("Ingrese Horarios");
        scanf("%c", &peliculas.horarios[]);
}

void eliminarpelicula(){
}
