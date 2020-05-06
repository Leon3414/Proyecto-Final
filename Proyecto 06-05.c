#include <stdio.h>
#include <string.h>
#define MAX 9

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
void agregarpelicula(struct pelicula *);
void eliminarpelicula(struct pelicula *);
//Todas estas son las funciones que va utilizar el programa
void main() {
    struct pelicula peliculas[MAX];
    int menu;
    int menucliente;
    int menuempleado; //Todos estos son variables que controlan el menu
    int indice=1;
    printf("Elija la opcion\n1)Cliente\n2)Empleado\n");
    while (indice==1){

    scanf("%d", &menu);
    switch(menu){ //aqui esta el menu entre el cliente o empleado
        case 1:
            printf("Menu Cine X\n1)Cartelera\n2)Precio por Salas\n3)Buscar Pelicula\n4)Seleccionar Pelicula y Sala\n5)Salir\n");
            scanf("%d", &menucliente);
            switch(menucliente){ // este es el munu de los clientes
                case 1:
                    imprimircartelera(peliculas);
                    break;
                case 2:
                    imprimirprecios();
                    break;
                case 3:
                    buscarpelicula();
                    break;
                case 4:
                    seleccionar(peliculas);
                    break;
                case 5:
                    return 0;
                default:
                    printf("Opcion no valida intente de nuevo\n"); //Todos los casos y su funcion respectiva
                    break;
    }
        break;
        case 2:
            printf("Menu Cine X Empleados\n1)Cartelera completa\n2)Agregar Pelicula\n3)Eliminar Pelicula\n4)Salir\n");
            scanf("%d", &menuempleado);
            switch(menuempleado){ //este es el menu de los empleados
                case 1:
                   imprimircartelera(peliculas);
                   break;
                case 2:
                    agregarpelicula(peliculas);
                    break;
                case 3:
                    eliminarpelicula(peliculas);
                    break;
                case 4:
                    return 0;
                 default:
                    printf("Opcion no valida intente de nuevo\n"); //Aqui esta los casos y funciones respectivas
                    break;
            }
            break;
             default:
                    printf("Opcion no valida intente de nuevo\n"); //en caso que el usuario ingrese una funcion queno este
        }
    }
}

void imprimircartelera(struct pelicula peliculas[9]){
     int indice1=0;
     while(indice1<=9){
        printf("Peicula: %s\n", peliculas[indice1].titulo);
        printf("Fecha de estreno: %s\n", peliculas[indice1].fecha);
        printf("Genero: %s\n", peliculas[indice1].genero);
        printf("Duracion: %s minutos\n", peliculas[indice1].duracion);
        printf("Estudio: %s\n", peliculas[indice1].estudio);
        printf("Director: %s\n", peliculas[indice1].director);
        printf("Horarios: %s\n", peliculas[indice1].horarios);
        indice1= indice1+1;
     }//esta funcion lo que hace es imprimir todos los datos que esten guardados
}

void imprimirprecios(){
    printf("Sala Normal 50$\nSala 3D 80$\nSala VIP 40$\n"); //Solo imprime precios jaja
}

void buscarpelicula(struct pelicula peliculas[9]){
    int i=0;
    int cierto=0;
    char busqueda[20];
    printf("Busque la pelicula por su titulo");
    scanf("%d", &busqueda);
    while(i<9){
        if(busqueda==peliculas[i].titulo){
                printf("Peicula: %s\n", peliculas[i].titulo);
                printf("Fecha de estreno: %s\n", peliculas[i].fecha);
                printf("Genero: %s\n", peliculas[i].genero);
                printf("Duracion: %s minutos\n", peliculas[i].duracion);
                printf("Estudio: %s\n", peliculas[i].estudio);
                printf("Director: %s\n", peliculas[i].director);
                printf("Horarios: %s\n", peliculas[i].horarios);
                cierto = 1;//Si encuentra la pelicula cambia el valor de la variable cierto
        }
        i++;
    }
    if(cierto==0){ //si encuentra una pelicula se cambia el valor de cierto por lo que no sale el mensaje
        printf("Pelicula no encontrada, intente de nuevo");
    }
}

void seleccionar(struct pelicula peliculas[9]){
    int seleccion;
    int i = 0;
    printf("¿Que pelicula desea ver? (Escoja la pelicula por el numero de su posicion)\n");
    scanf("%d", &seleccion);
    while(i<9){
        if(i==seleccion){
            printf("usted eligio ver la pelicula %s\n", peliculas[i].titulo);// Dependiendo de la eleccion del usuario imprime la pelicula
        }
       i++;
    }
}

void agregarpelicula(struct pelicula peliculas[9]){
        int i;
        int indice=0;
        struct pelicula peliculass[MAX];
        printf("Que elemento desea agregar\n");
        setbuf(stdin, NULL);
        scanf("½d", &i);
        getchar();
        for(indice=0;indice<MAX;indice++){
                printf("Ingrese Pelicula");
                setbuf(stdin, NULL);
                scanf("%s", &peliculass[indice].titulo);
                getchar();
                printf("Ingrese Fecha De estreno");
                setbuf(stdin, NULL);
                scanf("%s", &peliculass[indice].fecha);
                getchar();
                printf("Ingrese Genero");
                setbuf(stdin, NULL);
                scanf("%s", &peliculass[indice].genero);
                getchar();
                printf("Ingrese Duracion");
                setbuf(stdin, NULL);
                scanf("%i", &peliculass[indice].duracion);
                getchar();
                printf("Ingrese Estudio");
                setbuf(stdin, NULL);
                scanf("%s", &peliculass[indice].estudio);
                getchar();
                printf("Ingrese Director");
                setbuf(stdin, NULL);
                scanf("%s", &peliculass[indice].director);
                getchar();
                printf("Ingrese Horarios");
                setbuf(stdin, NULL);
                scanf("%s", &peliculass[indice].horarios);
                getchar();
            }
        }
        //este es el ingreso de los datos en un espacio del arreglo
}

void eliminarpelicula(struct pelicula peliculas[9]){
    int i;
    printf("¿Que elemento desea eliminar? (Escoja la pelicula por su numero de posicion)\n");
    scanf("%d", &i);
strcpy(peliculas[i].titulo," ");
strcpy(peliculas[i].fecha," ");
strcpy(peliculas[i].genero," ");
strcpy(peliculas[i].duracion," ");
strcpy(peliculas[i].estudio," ");
strcpy(peliculas[i].director," ");
strcpy(peliculas[i].horarios," ");//aqui solo vacia los datos por lo que los borra
}
