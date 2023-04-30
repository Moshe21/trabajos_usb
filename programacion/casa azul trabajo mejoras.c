#include <stdio.h>


// Importa las bibliotecas estï¿½ndar para entrada/salida y manejo de cadenas.

//
int f=0;
const int i= 10;
const int M= 10;

// Declaraciï¿½n de variables globales, 'f' es un contador, 'i' y 'M' son constantes.

void menu_ing();
void menu_reg();
void menu_prof();
void menu_estu();
void menu_ing_notas();
void menu_ver_notas();

// Declaraciï¿½n de funciones que se definirï¿½n mï¿½s adelante.

//
int reg_nom_user;
int reg_pass_user;	
int pass_user ;
int nom_user ;
int ing_nota_1;
int ing_nota_2;
int ing_nota_3;

// Declaraciï¿½n de variables globales, que se utilizarï¿½n para almacenar informaciï¿½n de los usuarios y las notas.

//
struct info_user{
 
	int reg_nom_user;
	int reg_pass_user;	
};

// Declaraciï¿½n de una estructura para almacenar la informaciï¿½n de cada usuario (nombre y contraseï¿½a).

struct info_user I[3]={};
struct info_nota{
 
	int nota_1;
	int nota_2;
	int nota_3;
		
};

// Declaraciï¿½n de una estructura para almacenar las notas de cada usuario.

struct info_nota N[3]={};

// Declaracion de un arreglo de estructuras para almacenar informaciï¿½n de los usuarios y las notas.

int main (){
	
	// La funcion principal del programa.

	while(1){
        int opcion;
		// Bucle que se ejecuta indefinidamente hasta que se elija la opciï¿½n "3".
		// Se solicita al usuario que ingrese una opciï¿½n (1, 2 o 3).
		printf("BIENVENIDOS AL COLEGIO \n      CASITA AZUL\n 1.INGRESAR\n 2.REGISTRASE\n 3.EXIT\n ingrese una opcion\t");
		scanf("%d",&opcion);
		
		switch(opcion){
		
			// Se utiliza un switch para determinar quï¿½ funciï¿½n se debe llamar en funciï¿½n de la opciï¿½n ingresada.
			// En caso de ingresar "1", se llama a la funciï¿½n "menu_ing()".
			case 1:{
					menu_ing();
					break;
				}
			// En caso de ingresar "2", se llama a la funciï¿½n "menu_reg()".
			case 2:{
					menu_reg();
					break;
				}
			// En caso de ingresar "3", se sale del bucle.
			case 3:{
					f=3;
				
				}
			// En caso de ingresar una opciï¿½n invï¿½lida, se muestra un mensaje de error.
			default:
				printf("bi bu bi bu error vueleve a intentar");
		
		}	
	}
	
	// Mensaje final que se muestra al salir del bucle.
	printf("QUE TENGO UN BUEN DIA LES DESEA\n COLEGIO \n      CASITA AZUL ");
};

void menu_ing(){
	
	// Funciï¿½n para manejar el ingreso al sistema.

	printf("INGRESAR \n Usuario");
	scanf("%d",&nom_user);
	
	printf("\n contraseña");
	scanf("%d",&pass_user);
	
	// Se utiliza un bucle for para verificar las credenciales ingresadas.
	// Si se encuentran coincidencias, se llama a la funciï¿½n correspondiente.
	// Si no se encuentran coincidencias, se muestra un mensaje de error.
	for(int g=0;g<3;g++){
            printf("hola");
            
            }
            

         
    	if(reg_nom_user ==nom_user && reg_pass_user==pass_user){
    		
    		menu_prof();
    	}
    	else if (reg_nom_user==nom_user && reg_pass_user==pass_user){
	    	
    		menu_estu();
	    }
	    else{
		printf("NO ESTAS REGISTRADO");
	    }
	
} 



void menu_prof(){
     
     while(f!=3){
     
        // Se inicializa una variable 'opcion' y se imprime un menï¿½
        // para que el profesor elija una opciï¿½n.
        
        int opcion;
		printf("BIENVENIDOS AL COLEGIO \n      CASITA AZUL\n 1.INGRESAR NOMBRE ESTUDIANTES\n 2.VER NOTAS DEL ESTUDIANTE \n 3.EXIT\n ingrese una opcion\t");
		scanf("%d",&opcion);
		
		// Dependiendo de la opciï¿½n seleccionada, se ejecuta una funciï¿½n
		// diferente. Si se ingresa la opciï¿½n 1, se llama a la funciï¿½n
		// 'menu_ing_notas'. Si se ingresa la opciï¿½n 2, se llama a la
		// funciï¿½n 'menu_ver_notas' y luego a 'menu_estu'. Si se ingresa
		// la opciï¿½n 3, se sale del bucle.
		
		switch(opcion){
		
			case 1:{
                 
					menu_ing_notas();
					break;
				}
			case 2:{
					menu_ver_notas();
    				menu_estu();
				}
			case 3:{
					f=3;
				}
			default:
				printf("bi bu bi bu error vueleve a intentar");
		
		}	
	}    
     
}
//En resumen, esta funciï¿½n muestra un menï¿½ al profesor con tres opciones 
//diferentes y ejecuta una acciï¿½n dependiendo de la opciï¿½n seleccionada. 
//El bucle se repetirï¿½ hasta que se seleccione la opciï¿½n 3, 
//momento en el que se saldrï¿½ del bucle y se terminarï¿½ la funciï¿½n.

void menu_ing_notas(){

     // Se pide al usuario que ingrese un nombre de usuario y una
     // contraseï¿½a, y se almacenan en las variables 'nom_user' y
     // 'pass_user'.
     
     printf("INGRESAR \n Usuario");
	scanf("%d",&nom_user);
	
	printf("\n contraseï¿½a");
    scanf("%d",&pass_user);
	
    // Se realiza un bucle 'for' que se repetirï¿½ tres veces. Dentro
    // del bucle, se verifica si el nombre de usuario y la contraseï¿½a
    // ingresados coinciden con los almacenados en la estructura 'I'.
    
	for(int j=0;j<3;j++){
        if(reg_nom_user==nom_user && reg_pass_user==pass_user){
    		
            // Si las credenciales son correctas, se le pide al profesor
            // que ingrese las notas del estudiante, y se suman a las
            // notas almacenadas en la estructura 'N'.
            
    		printf("Nota 1: \n");
	        scanf("%d",&ing_nota_1);
            N[i].nota_1+=ing_nota_1;
	
    		printf("Nota 2: \n");
    		scanf("%d",&ing_nota_2);
            N[i].nota_2+=ing_nota_2;
	
    		printf("Nota 3: \n");
    		scanf("%d",&ing_nota_3);
            N[i].nota_3+=ing_nota_3;

            
	    }
	    else{
	    
            // Si las credenciales son incorrectas, se imprime un mensaje
            // de error.
            
		    printf("NO ESTAS REGISTRADO");
	    }
    } 
}
  
void menu_ver_notas(){  
//Este es un fragmento de cï¿½digo en lenguaje C++ que define 
//una funciï¿½n llamada "menu_ver_notas".

    printf("INGRESAR \n Usuario");
	scanf("%d",&nom_user);
//La funciï¿½n recorre un arreglo de usuarios y 
//compara el nombre de usuario ingresado con los nombres 
//de usuario almacenados en el arreglo.
	
	printf("\n contraseï¿½a");
    scanf("%d",&pass_user);
	
	for(int j=0;j<3;j++){
        if(reg_nom_user==nom_user && reg_pass_user==pass_user){                                                          	if(I[j].reg_nom_user[i]==nom_user[i]){
 //Si encuentra un usuario con el mismo nombre de usuario,
//muestra las notas correspondientes a ese usuario.

    		printf("Nota 1: \n %d",N[i].nota_1);
            printf("Nota 2: \n %d",N[i].nota_2);
            printf("Nota 3: \n %d",N[i].nota_3);
	    	}
		}
	    else{
		printf("NO ESTAS REGISTRADO");
//Si no encuentra un usuario con el mismo nombre de usuario, 
//muestra el mensaje "NO ESTAS REGISTRADO".
	    }
    }     
}



void menu_estu(){
     //Este es un fragmento de cï¿½digo en lenguaje 
     //C++ que define una funciï¿½n llamada "menu_estu".
     printf("hola querido estudiante");
     //La funciï¿½n muestra un mensaje de bienvenida y 
     //muestra un menï¿½ con varias opciones para el usuario.
     while(f!=3){
     //Luego, utiliza un bucle "while" para repetir 
     //el menï¿½ hasta que el usuario seleccione la opciï¿½n de "EXIT".
        int opcion;
		printf("BIENVENIDOS AL COLEGIO \n      CASITA AZUL\n 1.VER NOTAS DEL ESTUDIANTE\n 2.VER PROMEDIO DE NOTAS \n 3.VER NOTAS MAS ALTA \n 4.EXIT\n ingrese una opcion\t");
		scanf("%d",&opcion);
		
		switch(opcion){
	
		
			case 1:{
                 //muestra las notas correspondientes a ese usuario.
                 printf("Nota 1: \n %d",N[i].nota_1);
                 printf("Nota 2: \n %d",N[i].nota_2);
                 printf("Nota 3: \n %d",N[i].nota_3);
                 break;
                 
				}
			case 2:{
                 int promedio=(N[i].nota_1+N[i].nota_2+N[i].nota_3)/3;
				 printf("Nota 3: \n %d",promedio);
				 break;
				}
			case 3:{
				if(N[i]nota_1>N[i]nota_2){
                   printf("Nota 1: \n %d",N[i].nota_1);                     
                   }
                   if else(N[i]nota_2>N[i]nota_3){
                       printf("Nota 2: \n %d",N[i].nota_2); 
                   }
                   else{
                       printf("Nota 3: \n %d",N[i].nota_3); 
                   }
              }
			case 4:{
			        f=4;
				
			     }
			default:
				printf("bi bu bi bu error vueleve a intentar");
		
		}	
	}    
    
    //dependiendo de la opciï¿½n seleccionada por el usuario, la funciï¿½n 
    //muestra las notas correspondientes al usuario, el promedio de las notas
    //o la nota mï¿½s alta del estudiante ,Para cada opciï¿½n, 
    //se utiliza la estructura de control "switch" para realizar diferentes
    //acciones en funciï¿½n de la opciï¿½n seleccionada por el usuario.
    //La funciï¿½n tambiï¿½n define una variable "f" que se utiliza para 
    //salir del bucle "while" cuando se selecciona la opciï¿½n de "EXIT".
    
    
    
     
}
void menu_reg(){
//La funciï¿½n permite al usuario registrar un nuevo usuario y contraseï¿½a 
//en el sistema.

    	printf("INGRESAR \n Usuario");
    	scanf("%d",&reg_nom_user);
//Luego, utiliza la funciï¿½n "scanf" para leer el nombre de usuario 
//ingresado por el usuario y lo guarda en una variable llamada 
//"reg_nom_user".
    	I[i].nom_user[i]+=reg_nom_user;
//A continuaciï¿½n, el nombre de usuario se agrega al arreglo 
de nombres de usuario almacenado en la estructura "I" en la posiciï¿½n "i".                	
    	printf("\n contraseï¿½a");
    	scanf("%d",&reg_pass_user[]);
    	I[i].pass_user[i]+=reg_pass_user;
                	
    	i+=1;
                	
//La contraseï¿½a se agrega al arreglo de contraseï¿½as almacenado 
//en la estructura "I" en la posiciï¿½n "i".	
//Finalmente, la funciï¿½n incrementa la variable "i" en 1 para 
//que el prï¿½ximo usuario se registre en la siguiente posiciï¿½n del arreglo.
}
