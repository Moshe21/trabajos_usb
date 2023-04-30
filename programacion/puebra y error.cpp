int main (){
	
	// La funcion principal del programa.

	while(1){
        int opcion;
		// Bucle que se ejecuta indefinidamente hasta que se elija la opci�n "3".
		// Se solicita al usuario que ingrese una opci�n (1, 2 o 3).
		printf("BIENVENIDOS AL COLEGIO \n      CASITA AZUL\n 1.INGRESAR\n 2.REGISTRASE\n 3.EXIT\n ingrese una opcion\t");
		scanf("%d",&opcion);
		
		switch(opcion){
		
			// Se utiliza un switch para determinar qu� funci�n se debe llamar en funci�n de la opci�n ingresada.
			// En caso de ingresar "1", se llama a la funci�n "menu_ing()".
			case 1:{
					menu_ing();
					break;
				}
			// En caso de ingresar "2", se llama a la funci�n "menu_reg()".
			case 2:{
					menu_reg();
					break;
				}
			// En caso de ingresar "3", se sale del bucle.
			case 3:{
					f=3;
				
				}
			// En caso de ingresar una opci�n inv�lida, se muestra un mensaje de error.
			default:
				printf("bi bu bi bu error vueleve a intentar");
		
		}	
	}
	
	// Mensaje final que se muestra al salir del bucle.
	printf("QUE TENGO UN BUEN DIA LES DESEA\n COLEGIO \n      CASITA AZUL ");
};
