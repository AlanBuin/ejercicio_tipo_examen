#include <iostream>
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void printMenu() {
	system("cls");
	printf("\n ----> MENU <----");
	printf("\n 1 captura de datos de los empleados ");
	printf("\n 2 lista general ordenada y totalizada ");
	printf("\n 3 lista por departamento");
	printf("\n 4 lista por tipo de salario y sucursal");
	printf("\n 5 lista de horario y monto de salario ");
	printf("\n 6 busqueda por id del pempleado");
	printf("\n 7 salir del programa");
	printf("\n\n Seleccione una opcion: ");
}

void ejecutarMenu() {

	int opcion;
	do {
		printMenu();

		scanf("%d", &opcion);
		fflush(stdin);
		printf("\nopcion seleccionada: %d", opcion);

		switch(opcion) {
			case 1: {
				printf("\nexiste");
			}
			break;
			case 2: {
				printf("\nexiste");
			}
			break;
			case 3: {
				printf("\nexiste");
			}
			break;
			case 4: {
				printf("\nexiste");
			}
			break;
			case 5: {
				printf("\nexiste");
			}
			break;
			case 6: {
				printf("\nexiste");
			}
			break;
			case 7: {
				printf("\nexiste");
			}
			break;
			default: {
				printf("\n*Seleccione una opcion valida.*");
			}
		}
		
		printf("\n");
		system("pause");

	} while(opcion != 7);


}

int main(int argc, char** argv) {

	ejecutarMenu();

	return 0;
}
