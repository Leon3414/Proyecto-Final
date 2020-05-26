#include <stdio.h>
#include <string.h>
#define MAX 2

struct pelicula{
char titulo[20];
char fecha[40];
char genero[20];
int duracion;
char estudio[15];
char director[15];
char horarios[15];
};//estos son los datos que tendran el structc

void imprimircartelera(struct pelicula *);
void imprimirprecios();
void buscarpelicula();
void seleccionar(struct pelicula *);
void eliminarpelicula(struct pelicula *);
//Todas estas son las funciones que va utilizar el programa
void main() {
    struct pelicula peliculas[MAX];
    int menu;
    int menucliente;
    int menuempleado; //Todos estos son variables que controlan el menu
    int indice=1;
    int i = 0;
    while (indice==1){
    system("cls");
    system("COLOR 07");
    printf("Cartelera de un cine X\n");
    printf("Elija la opcion\n1)Cliente\n2)Empleado\n3)Salir\n");
    scanf("%d", &menu);
    switch(menu){ //aqui esta el menu entre el cliente o empleado
        case 1:
            system("cls");
            system("COLOR 02");
            printf("Menu Cine X\n1)Cartelera\n2)Precio por Salas\n3)Buscar Pelicula\n4)Seleccionar Pelicula y Sala\n5)Salir\n");
            scanf("%d", &menucliente);
            switch(menucliente){ // este es el munu de los clientes
                case 1:
                    imprimircartelera(peliculas);
                    system("pause");
                    break;
                case 2:
                    imprimirprecios();
                    system("pause");
                    break;
                case 3:
                    buscarpelicula(peliculas);
                    setbuf(stdin, NULL);
                    getchar();
                    system("pause");
                    break;
                case 4:
                    seleccionar(peliculas);
                    system("pause");
                    break;
                case 5:
                    return 0;
                    break;
                default:
                    printf("Opcion no valida intente de nuevo\n"); //Todos los casos y su funcion respectiva
                    break;
    }
        break;
        case 2:
            system("cls");
            system("COLOR 01");
            printf("Menu Cine X Empleados\n1)Cartelera completa\n2)Agregar Pelicula\n3)Eliminar Pelicula\n4)Salir\n");
            scanf("%d", &menuempleado);
            switch(menuempleado){ //este es el menu de los empleados
                case 1:
                   imprimircartelera(peliculas);
                   system("pause");
                   break;
                case 2:
                    system("cls");
                    system("COLOR 0C");
                    FILE *F;
                    F = fopen("nombre.txt", "w");
                    if(i<MAX){
                        printf("Ingrese Pelicula\n");
                        setbuf(stdin, NULL);
                        scanf("%s", &peliculas[i].titulo);
                        getchar();
                        printf("Ingrese Fecha De estreno\n");
                        setbuf(stdin, NULL);
                        scanf("%s", &peliculas[i].fecha);
                        getchar();
                        printf("Ingrese Genero\n");
                        setbuf(stdin, NULL);
                        scanf("%s", &peliculas[i].genero);
                        getchar();
                        printf("Ingrese Duracion (En minutos)\n");
                        setbuf(stdin, NULL);
                        scanf("%i", &peliculas[i].duracion);
                        getchar();
                        printf("Ingrese Estudio\n");
                        setbuf(stdin, NULL);
                        scanf("%s", &peliculas[i].estudio);
                        getchar();
                        printf("Ingrese Director\n");
                        setbuf(stdin, NULL);
                        scanf("%s", &peliculas[i].director);
                        getchar();
                        printf("Ingrese Horarios\n");
                        setbuf(stdin, NULL);
                        scanf("%s", &peliculas[i].horarios);
                        getchar();
                        fwrite(&peliculas, sizeof(peliculas),1,F);
                        printf("Pelicula Guardada\n");
                        fclose(F);
                        i++;
                    }else{
                        printf("Espacio lleno\n");
                    }
                    system("pause");
                    break;
                case 3:
                    eliminarpelicula(peliculas);
                    system("pause");
                    break;
                case 4:
                    return 0;
                    break;
                 default:
                    printf("Opcion no valida intente de nuevo\n"); //Aqui esta los casos y funciones respectivas
                    break;
            }
            break;
                case 3:
                    return 0;
                    break;
             default:
                    printf("Opcion no valida intente de nuevo\n");
                    break; //en caso que el usuario ingrese una funcion queno este
        }
    }
    return 0;
}

void imprimircartelera(struct pelicula peliculas[MAX]){
     system("cls");
     system("COLOR 16");
     FILE *F;
     F = fopen("movies.txt", "rb");
     for(int indice1=0; indice1<MAX; indice1++){
        fread(&peliculas, sizeof(peliculas),1,F);
        printf("Posicion %i\n", indice1);
        printf("Peicula: %s\n", peliculas[indice1].titulo);
        printf("Fecha de estreno: %s\n", peliculas[indice1].fecha);
        printf("Genero: %s\n", peliculas[indice1].genero);
        printf("Duracion: %i minutos\n", peliculas[indice1].duracion);
        printf("Estudio: %s\n", peliculas[indice1].estudio);
        printf("Director: %s\n", peliculas[indice1].director);
        printf("Horarios: %s\n\n", peliculas[indice1].horarios);
     }//esta funcion lo que hace es imprimir todos los datos que esten guardados
     fclose(F);
}

void imprimirprecios(){
    system("cls");
    system("COLOR 70");
    printf("1)Sala Normal 50$\n2)Sala 3D 80$\n3)Sala VIP 40$\n"); //Solo imprime precios jaja
}

void buscarpelicula(struct pelicula peliculas[MAX]){
    system("cls");
    system("COLOR 05");
    FILE *F;
    F = fopen("movies.txt", "a+");
    int i, ax;
    int cierto=0;
    char busqueda[20];
    printf("Busque la pelicula por su titulo\n");
    setbuf(stdin, NULL);
    scanf("%d", &busqueda);
    getchar();
    fread(&peliculas, sizeof(peliculas),1,F);
    for(i=0; i<MAX; i++){
        if(strcmp(peliculas[i].titulo,busqueda)==0){
              ax=1;
              break;
        }
        }
        i--;
        if(ax=1){
            printf("Posicion %i\n", i);
            printf("Peicula: %s\n", peliculas[i].titulo);
            printf("Fecha de estreno: %s\n", peliculas[i].fecha);
            printf("Genero: %s\n", peliculas[i].genero);
            printf("Duracion: %i minutos\n", peliculas[i].duracion);
            printf("Estudio: %s\n", peliculas[i].estudio);
            printf("Director: %s\n", peliculas[i].director);
            printf("Horarios: %s\n", peliculas[i].horarios);
        }
        fclose(F);
}

void seleccionar(struct pelicula peliculas[MAX]){
    system("cls");
    imprimircartelera(peliculas);
    system("COLOR 0B");
    int seleccion;
    int i, j;
    printf("¿Que pelicula desea ver? (Escoja la pelicula por el numero de su posicion)\n");
    scanf("%d", &i);
    imprimirprecios();
    system("COLOR 0B");
    printf("Seleccione que sala quiere\n");
    scanf("%i", &j);
    system("cls");
    system("COLOR 0B");
    switch(j){
        case 1:
            printf("Usted eligio Sala normal\n");
            break;
        case 2:
            printf("Usted eligio Sala normal\n");
            break;
        case 3:
            printf("Usted eligio Sala VIP\n");
            break;
        default:
            printf("Opcion no valida, intente de nuevo\n");
    }
    for(int z=i; z<MAX; z++){
    printf("Usted eligio ver la pelicula %s\n", peliculas[z].titulo);
    break;
    }
    // Dependiendo de la eleccion del usuario imprime la pelicula
}

void eliminarpelicula(struct pelicula peliculas[MAX]){
    system("cls");
    imprimircartelera(peliculas);
    system("COLOR 04");
    int i;
    FILE *F;
    F = fopen("movies.txt", "wb");
    printf("¿Que elemento desea eliminar?\n Escoja la pelicula por su numero de posicion\n");
    scanf("%d", &i);
strcpy(peliculas[i].titulo," ");
strcpy(peliculas[i].fecha," ");
strcpy(peliculas[i].genero," ");
peliculas[i].duracion=NULL;
strcpy(peliculas[i].estudio," ");
strcpy(peliculas[i].director," ");
strcpy(peliculas[i].horarios," ");
fwrite(&peliculas, sizeof(peliculas),1,F);
printf("Pelicula posicion numero %i eliminada\n", i);
fclose(F);//aqui solo vacia los datos por lo que los borra
}
