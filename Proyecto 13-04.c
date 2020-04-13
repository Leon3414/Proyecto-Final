#include <stdio.h>
#include <string.h>

struct pelicula{
char titulo[20];
char fecha[40];
char genero[20];
int duracion;
char estudio[15];
char director[15];
char horarios[15];
};

void imprimircartelera(struct peilcula);
void imprimirprecios();
void buscarpelicula();
void seleccionar();
struct pelicula agregarpelicula(char fecha, char genero, int duracion, char estudio, char director, char horarios);
void eliminarpelicula();

void main() {
    struct pelicula.peliculas[9];
    int menu;
    int menucliente;
    int menuempleado;
    int indice=1;
    while (indice=1){
    scanf("%d", &menu);
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
        printf("Peicula: %s\n", peliculas[indice1].titulo);
        printf("Fecha de estreno: %s\n", peliculas[indice1].fecha);
        printf("Genero: %s\n", peliculas[indice1].genero);
        printf("Duracion: %s minutos\n", peliculas[indice1].duracion);
        printf("Estudio: %s\n", peliculas[indice1].estudio);
        printf("Director: %s\n", peliculas[indice1].director);
        printf("Horarios: %s\n", peliculas[indice1].horarios);
        indice1++;
     }
}

void imprimirprecios(){
    printf("Sala Normal 50$\nSala 3D 80$\nSala VIP 40$\n");
}

void buscarpelicula(){
}

void seleccionar(){
    int seleccion;
    printf("¿Que pelicula desea ver?");
    scanf("%d", &seleccion);
    switch(seleccion){
        case 1:
            printf("usted eligio ver la pelicula %s\n", peliculas[0].titulo);
        case 2:
            printf("usted eligio ver la pelicula %s\n", peliculas[1].titulo);
        case 3:
            printf("usted eligio ver la pelicula %s\n", peliculas[2].titulo);
        case 4:
            printf("usted eligio ver la pelicula %s\n", peliculas[3].titulo);
        case 5:
            printf("usted eligio ver la pelicula %s\n", peliculas[4].titulo);
        case 6:
            printf("usted eligio ver la pelicula %s\n", peliculas[5].titulo);
        case 7:
            printf("usted eligio ver la pelicula %s\n", peliculas[6].titulo);
        case 8:
            printf("usted eligio ver la pelicula %s\n", peliculas[7].titulo);
        case 9:
            printf("usted eligio ver la pelicula %s\n", peliculas[8].titulo);
        case 10:
            printf("usted eligio ver la pelicula %s\n", peliculas[9].titulo);
    }
}

struct pelicula agregarpelicula(char fecha, char genero, int duracion, char estudio, char director, char horarios){
        int i;
        printf("Que elemento desea agregar");
        scanf("½d", &i);
        print("Ingrese Pelicula");
        scanf("%c", &peliculas[i].titulo);
        print("Ingrese Fecha De estreno");
        scanf("%c", &peliculas[i].fecha);
        print("Ingrese Genero");
        scanf("%c", &peliculas[i].genero);
        print("Ingrese Duracion");
        scanf("%i", &peliculas[i].duracion);
        print("Ingrese Estudio");
        scanf("%c", &peliculas[i].estudio);
        print("Ingrese Director");
        scanf("%c", &peliculas[i].director);
        print("Ingrese Horarios");
        scanf("%c", &peliculas[i].horarios);
}

void eliminarpelicula(){
    int i;
    printf("¿Que elemento desea eliminar?");
    scanf("%d", &i);
strcpy(peliculas[i].titulo," ");
strcpy(peliculas[i].fecha," ");
strcpy(peliculas[i].genero," ");
strcpy(peliculas[i].duracion," ");
strcpy(peliculas[i].estudio," ");
strcpy(peliculas[i].director," ");
strcpy(peliculas[i].horarios," ");
}
