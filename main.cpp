using namespace std;
#include <iostream>
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<conio.h>
#include <list>
#include <string>
#include <iterator>
#include <algorithm>
#include <limits> // new line added here to add header
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


class Empleado {
	public:
		int id;
		string nombre;
		string puesto;
		int departamento;
		int horario;
		int sucursal;
		int tipoSalario;
		float salarioDiario;
		int diasTrabajadosQuincena;

		Empleado() {

		}

		Empleado(
		    int p_id,
		    string p_nombre,
		    string p_puesto,
		    int p_departamento,
		    int p_horario,
		    int p_sucursal,
		    int p_tipoSalario,
		    float p_salarioDiario,
		    int p_diasTrabajadosQuincena) {
			id = p_id;
			nombre = p_nombre;
			puesto = p_puesto;
			departamento = p_departamento;
			horario = p_horario;
			sucursal = p_sucursal;
			tipoSalario = p_tipoSalario;
			salarioDiario = p_salarioDiario;
			diasTrabajadosQuincena = p_diasTrabajadosQuincena;
		}

		void imprimirInformacion() {
			cout << "\n{\n\tid: " << id << "\n\tnombre: " << nombre << "\n\tpuesto: " << puesto << "\n\tdepartamento: "
			     << getNombreDepartamento() << "\n\thorario: " << getNombreHorario() << "\n\tsucursal: " << getNombreSucursal() << "\n\ttipo salario: "
			     << getNombreTipoSalario() << "\n\tsalario: " << salarioDiario  << "\n\tdiasTrabajadosQuincena: "
			     << diasTrabajadosQuincena << "\n}\n\n\n"
			     << "Salario bruto: " << getSalarioBruto();
		}

		void printBasic() {
			cout << "\n[id]: " << id << ", " << nombre;
		}

		float getSalarioBruto() {
			return salarioDiario * float(diasTrabajadosQuincena);
		}

		string getNombreDepartamento() {
			switch(departamento) {
				case 1:
					return "RH";
				case 2:
					return "Finanzas";
				case 3:
					return "sistemas";
				case 4:
					return "ventas";
				case 5:
					return "mantenimiento";
				default:
					return "ninguno";
			}
		}

		string getNombreHorario() {
			switch(horario) {
				case 1:
					return "matutino";
				case 2:
					return "vespertino";
				default:
					return "ninguno";
			}
		}

		string getNombreSucursal() {
			switch(sucursal) {
				case 1:
					return "Santa fe";
				case 2:
					return "Perisur";
				case 3:
					return "Satélite";
				case 4:
					return "Querétaro";
				case 5:
					return "Jalisco";
				default:
					return "ninguno";
			}
		}

		string getNombreTipoSalario() {
			switch(tipoSalario) {
				case 1:
					return "nomina";
				case 2:
					return "honorarios";
				default:
					return "ninguno";
			}
		}
		
		// Aquí van las formulas para ims, bruto, etc.

};

Empleado lstEmpleados[20];
int contadorEmpleado = 0;

void cleanCin() {
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void capturarEmpleado() {

	int id;
	printf("Id del empleado: ");
	scanf("%d", &id);
	fflush(stdin);

	string nombre;
	printf("Nombre completo: ");
	cin >> nombre;
	fflush(stdin);

	string puesto;
	printf("Puesto: ");
	cin >> puesto;
	fflush(stdin);

	int departamento;
	printf("Departamento: \n1: RH\n2: Finanzas\n3: Sistemas\n4: ventas\n 5: mantenimiento\n");
	cin >> departamento;
	fflush(stdin);

	int horario;
	printf("Horario: \n1: matutino\n2: vespertino\n");
	cin >> horario;
	fflush(stdin);

	int sucursal;
	printf("Sucursal: \n1.Santa fe\n2: Perisur\n3: Satélite\n4: Querétaro\n5: Jalisco\n");
	cin >> sucursal;
	fflush(stdin);

	int tipoSalario;
	printf("Tipo Salario: \n1: honorarios \n2: nomina\n");
	cin >> tipoSalario;
	fflush(stdin);

	float salario;
	printf("Salario diario: ");
	scanf("%f", &salario);
	fflush(stdin);

	int diasTrabajados;
	printf("Dias trabajados: ");
	scanf("%d", &diasTrabajados);
	fflush(stdin);

	Empleado empleado = Empleado(id, nombre, puesto, departamento, horario, sucursal, tipoSalario, salario, diasTrabajados);
	empleado.imprimirInformacion();
	lstEmpleados[contadorEmpleado] = empleado;
	contadorEmpleado++;
}

void imprimirListaEmpleadosPorIdCompleta() {

	Empleado temp;
	for (int i=1; i<contadorEmpleado; i++) {
		for (int j=0 ; j<contadorEmpleado - 1; j++) {
			if (lstEmpleados[j].id > lstEmpleados[j+1].id) {
				temp = lstEmpleados[j];
				lstEmpleados[j] = lstEmpleados[j+1];
				lstEmpleados[j+1] = temp;
			}

		}
	}

	for(int i = 0; i < contadorEmpleado; i++) {
		cout << "\n-----------------------------";
		lstEmpleados[i].imprimirInformacion();
	}

	cout << "\ntotal elementos: " << contadorEmpleado;
}

void imprimirListaEmpleadosPorId() {

	Empleado temp;
	for (int i=1; i<contadorEmpleado; i++) {
		for (int j=0 ; j<contadorEmpleado - 1; j++) {
			if (lstEmpleados[j].id > lstEmpleados[j+1].id) {
				temp = lstEmpleados[j];
				lstEmpleados[j] = lstEmpleados[j+1];
				lstEmpleados[j+1] = temp;
			}

		}
	}

	cout << "id\t|\tnombre\n--------------------------------";
	for(int i = 0; i < contadorEmpleado; i++) {
		cout << "\n" << lstEmpleados[i].id << "\t\t" << lstEmpleados[i].nombre;
	}

	cout << "\ntotal elementos: " << contadorEmpleado;
}

void imprimirListaPorDepartamento() {

	printf("Ingrese departamento: \n1: RH\n2: Finanzas\n3: Sistemas\n4: ventas\n5: mantenimiento\n");
	int idSeleccionado;
	cin >> idSeleccionado;
	cout << "id\t|\tnombre\n--------------------------------";
	for(int i = 0; i < contadorEmpleado; i++) {
		if(lstEmpleados[i].departamento == idSeleccionado) {
			cout << "\n" << lstEmpleados[i].id << "\t\t" << lstEmpleados[i].nombre;
		}
	}

}

void printMenu() {
	system("cls");
	printf("\n ----> MENU <----");
	printf("\n 1 captura de datos de los empleados.");
	printf("\n 2 lista general ordenada y totalizada.");
	printf("\n 3 lista por departamento.");
	printf("\n 4 lista por tipo de salario y sucursal.");
	printf("\n 5 lista de horario y monto de salario.");
	printf("\n 6 busqueda por id del empleado.");
	printf("\n 7 salir del programa.");
	printf("\n 8 Imprimir lista con informacion completa.");
	printf("\n\n Seleccione una opcion: ");
}

void ejecutarMenu() {

	int opcion;
	do {
		printMenu();

		scanf("%d", &opcion);
		fflush(stdin);

		switch(opcion) {
			case 1: {
				capturarEmpleado();
			}
			break;
			case 2: {
				imprimirListaEmpleadosPorId();
			}
			break;
			case 3: {
				imprimirListaPorDepartamento();
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
			case 8: {
				imprimirListaEmpleadosPorIdCompleta();
			}
			break;
			default: {
				printf("\n*Seleccione una opcion valida.*");
			}
		}

		printf("\n");
		cleanCin();
		system("pause");

	} while(opcion != 7);


}

int main(int argc, char** argv) {

	Empleado empleado1 = Empleado(14, "Kahjit", "gerente", 1, 1 ,1, 1, 500, 15);
	lstEmpleados[0] = empleado1;
	Empleado empleado2 = Empleado(1, "Alan", "conserje", 5, 1 ,1, 1, 200, 15);
	lstEmpleados[1] = empleado2;
	Empleado empleado3 = Empleado(10, "Yael", "ceo", 2,2,2,2, 2000, 15);
	lstEmpleados[2] =  empleado3;
	Empleado empleado4 = Empleado(8, "Miranda", "analista", 3,2,4,2, 700, 15);
	lstEmpleados[3] =  empleado4;
	Empleado empleado5 = Empleado(17, "Rocio", "analista", 3,1,2,1, 500, 15);
	lstEmpleados[4] =  empleado5;
	Empleado empleado6 = Empleado(3, "Manute", "analista", 4,2,3,1, 300, 15);
	lstEmpleados[5] =  empleado6;
	contadorEmpleado = 6;

	ejecutarMenu();

	return 0;
}
