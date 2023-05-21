#include <stdio.h>


#define MAX_USERS 10

// Declaración de funciones
void menu_ing();
void menu_reg();
void menu_prof();
void menu_estu();

// Variables globales
char reg_nom_user[50];
char reg_pass_user[50];
char pass_user[50];
char nom_user[50];

struct info_user {
    char reg_nom_user[50];
    char reg_pass_user[50];    
} I[MAX_USERS];

int main() {
    int f = 0;

    while (f != 3) {
        int opcion;
        printf("BIENVENIDOS AL COLEGIO\nCASITA AZUL\n");
        printf("1. INGRESAR\n2. REGISTRARSE\n3. SALIR\nIngrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: {
                menu_ing();
                break;
            }
            case 2: {
                menu_reg();
                break;
            }
            case 3: {
                f = 3;
                break;
            }
            default:
                printf("Error: opcion no valida.\n");
                break;
        }   
    }
    printf("QUE TENGA UN BUEN DIA, LES DESEA\nCOLEGIO CASITA AZUL\n");

    return 0;
}

int menu_ing(hola){
    // Función para manejar el ingreso al sistema.
    printf("INGRESAR\nUsuario: ");
    scanf("%s", nom_user);
    
    printf("\nContraseña: ");
    scanf("%s", pass_user);

    // Se utiliza un bucle for para verificar las credenciales ingresadas.
    // Si se encuentran coincidencias, se llama a la función correspondiente.
    // Si no se encuentran coincidencias, se muestra un mensaje de error.
for (int g = 0; g < 3; g++) {
    printf("hola");
}
    printf("NO ESTAS REGISTRADO\n");
    return 0;
}

void menu_reg() {
    // Función para manejar el registro de usuarios.
    printf("REGISTRARSE\nUsuario: ");
    scanf("%s", reg_nom_user);
    strcpy(I[i].reg_nom_user, reg_nom_user);

    printf("\nContraseña: ");
    scanf("%s", reg_pass_user);
    strcpy(I[i].reg_pass_user, reg_pass_user);

    printf("Usuario registrado con exito.\n");
}

void menu_prof() {
    // Función para manejar el menu del profesor.
    printf("Bienvenido querido profesor.\n1. INGRESAR\n2. REGISTRARSE\n3. SALIR\nIngrese una opcion: ");
    int opcion;
    scanf("%d", &opcion);

    switch (opcion) {
        case 1: {
            printf("INGRESAR\nUsuario del estudiante: ");
            scanf("%s", nom_user);

            for (int i = 0; i < MAX_USERS; i++) {
                if (strcmp(I[i].reg_nom_user, nom_user) == 0) {
                    printf("Ingresar\nCalificacion: ");
