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
     int indice=0;
     while(indice<=9){
        printf("Peicula: %s\n", peliculas.titulo);
        printf("Fecha de estreno: %s\n", peliculas.titulo);
        printf("Genero: %s\n", peliculas.genero);
        printf("Duracion: %s minutos\n", peliculas.duracion);
        printf("Estudio: %s\n", peliculas.estudio);
        printf("Director: %s\n", peliculas.director);
        printf("Horarios: %s\n", peliculas.horarios);
        indice++;
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
}

void eliminarpelicula(){
}
