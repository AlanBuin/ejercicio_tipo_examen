#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<conio.h>

struct empleado
{
	int id;
	char nombre[40];
	char puesto[40];
	int depto;
	char hrario[2];
	int sucurs;
	int sald;
	char dtrabajo[15];
	char tipsal[2];
	int sbruto, isr, imss, ivap, ivar, salnet;
};

empleado nomina[100],aux;
int opc,contar,r,i,j;
int xid, xr;
char encontrado;
float 
char 

void listagral();
void ordenar();


void menu()
{
	system("cls");
	printf("\n 1 captura de datos de los empleados ");
	printf("\n 2 lista general ordenada y totalizada ");
	printf("\n 3 lista por departamento");
	printf("\n 4 lista por tipo de salario y sucursal");
	printf("\n 5 lista de horario y monto de salario ");
	printf("\n 6 busqueda por id del pempleado");
	printf("\n 7 salir del programa");
}

int main()
{
	while(opc !=7)
	{
		menu();
		fflush(stdin);
		printf("que opcion quieres ");
		scanf("%d",&opc);
		switch(opc)
		{
			case 1:
				do
				{
					system("cls");
					contar++;
					fflush(stdin);
					printf("id del empleado ");
					scanf("%d",&nomina[contar].id);
					fflush(stdin);
					printf("nombre del empleado ");
					scanf("%d",&nomina[contar].nombre);
					fflush(stdin);
					printf("puesto del empleado ");
					scanf("%d",&nomina[contar].puesto);
					fflush(stdin);
					printf("departamento al que pertenece el empleado ");
					printf("\n departamentos");
					printf("\n 1 rh");
					printf("\n 2 finanzas");
					printf("\n 3 sistemas");
					printf("\n 4 ventas");
					printf("\n 5 mantenimiento");
					scanf("%d",&nomina[contar].depto);
					fflush(stdin);
					printf("horario del empleado ");
					printf("\n m=matutino");
					printf("\n v=vespertino");
					scanf("%d",&nomina[contar].hrario);
					fflush(stdin);
					printf("sucursal donde pertenece el empleado ");
					printf("\n sucursales");
					printf("\n 1 santa fe");
					printf("\n 2 perisur");
					printf("\n 3 satelite");
					printf("\n 4 queretaro");
					printf("\n 5 jalisco");
					scanf("%d",&nomina[contar].sucurs);
					fflush(stdin);
					printf("tipo de salario del empleado ");
					printf("\n h=honorarios");
					printf("\n n=nomina");
					scanf("%d",&nomina[contar].tipsal);
					fflush(stdin);
					printf("salario diario del empleado ");
					scanf("%d",&nomina[contar].sald;
					fflush(stdin);
					printf("dias de trabajo a la quincena del empleado ");
					scanf("%d",&nomina[contar].dtrabajo);
					fflush(stdin);
					
					nomina[contar].sbruto=nomina[contar].sald*nomina[contar].dtrabajo;
					if(nomina[contar].tipsal=='h')
					{
						nomina[contar].isr=nomina[contar].sbruto*0.10;
						nomina[contar].imss=0;
						nomina[contar].ivap=nomina[contar].sbruto*0.16;
						nomina[contar].ivar=nomina[contar].sbruto*0.10;
						
					}
					else
					{
						nomina[contar].isr=nomina[contar].sbruto*0.34;
						nomina[contar].imss=nomina[contar].sbruto*0.04;
						nomina[contar].ivap=0;
						nomina[contar].ivar=0;
					}
					
					nomina[contar].salnet=nomina[contar].sbruto-nomina[contar].isr-nomina[contar].imss+nomina[contar].ivap-nomina[contar].ivar;
			break;//termina case 1
			
			case 2:
				void ordenar
				{
					for(i=0;i<=contar;i++)
					{
						for(j=1;j<contar;j++)
						{
							if(nomina[j].id>nomina[j+1].id)
							{
								aux=nomina[j];
								nomina[j]=nomina[j+1];
								nomina[j+1]=aux
							}
						}
					}
				}
				
			
			break;// termina case2
			
			case 3:
				void listagral()
				{
					printf("%d ",nomina[r].id;
					printf("%s ",nomina[r].nombre;
					printf("%s ",nomina[r].puesto;
					swicht(nomina[r].depto)
					{
						case 1:
							printf("rh");
						break;
						case 2:
							printf("finanzas");
						break;
						case 3:
							printf("sistemas");
						break;
						case 4:
							printf("ventas");
						break;
						case 5:
							printf("mantenimineto");
						break;
					}//termina switch
				}//termina departamento
				
				if(nomina[r].hrario=='m')
				   printf("matutino");
				else
				   printf("vespertino");
				   
				switch(nomina[r].sucurs)
				{
					case 1:
						printf("santa fe");
					break;
					case 2:
							printf("perisur");
					break;
					case 3:
							printf("monterrey");
					break;
					case 4:
							printf("jalisco");
					break;
					case 5:
						printf("ciudad de mexico");
					break;
				}//termina sucursal
				
				if(nomina[r].tipsal=='h')
				   printf("honorarios");
				else
				   printf("nomina");
				   
				   
				   printf("%.2f ",nomina[r].sbruto);
				   printf("%.2f ",nomina[r].isr);
				   printf("%.2f ",nomina[r].imss);
				   printf("%.2f ",nomina[r].ivap);
				   printf("%.2f ",nomina[r].ivar);
				   printf("%.2f ",nomina[r].salnet);  
				
			break;//termina case 3	
			
			case 4:
				int main()
				
				
				break;
				
			case 5:
			
			break;//termina case5
			
			case 6:
				system("cls");
				encontrado'n';
				fflush("stdin");
				printf("id del empleado que desea buscar");
				scanf("%d",&xid);
				for(xr=1;xr<=contar;xr++)
				{
					if(almacen[xr].id==xid)
					{
						encontrado='s';
						r=xr;
						xr=contar;
					}
				}//termina for
				if(encontrado=='s')
				{
					listagral();
				}
				else
				{
					printf("el id del producto NO encontrado\n");
				}
				system("pause");
				
				break;
		}
	}
}//termina main


void listagral()
{
	printf("%d ",almacen[r].id);
	printf("%s ",almacen[r].marca);
	printf("%s ",almacen[r].description);
	switch(almacen[r].tienda)
	{
		case 1:
			printf(" perisur ");
		break;
			case 2:
			printf(" plaza las atenas ");
		break;		
			case 3:
			printf(" antarar ");
		break;	
			case 4:
			printf(" pericoapa ");
		break;	
			case 5:
			printf(" oasis ");
		break;	
		
	}//termina switch tienda
	
	switch(almacen[r].depto)
	{
		case 1:
			printf(" blnacos ");
		break;
			case 2:
			printf(" bebes ");
		break;		
			case 3:
			printf(" mascotas ");
		break;	
			case 4:
			printf(" electronica ");
		break;	
			case 5:
			printf(" zapateria ");
		break;	
		
	}//termina switch depto
	
	switch(almacen[r].temporada)
	{
		case 1:
			printf(" otono - invierno ");
		break;
			case 2:
			printf(" primavera - verano ");
		break;		
			case 3:
			printf(" navidad ");
		break;	
			case 4:
			printf(" san valentin ");
		break;	
			case 5:
			printf(" dia de muertos ");
		break;	
		
	}//termina switch temporada
	
	printf("%.2f ",almacen[r].precio);
	acum[0]+=almacen[r].precio;
	printf("%.2f ",almacen[r].descuento);
	acum[1]+=almacen[r].descuento;
	printf("%.2f ",almacen[r].subtotal);
	acum[2]+=almacen[r].subtotal;
	printf("%.2f ",almacen[r].iva);
	acum[3]+=almacen[r].iva;
	printf("%.2f ",almacen[r].total);
	acum[4]+=almacen[r].total;
	
	
}//termina void listagral

void ordenar()
{
	for(i=0;i<=contar;i++)
	{
		for(j=1;j<contar;j++)
		{
			if(almacen[j].id>almacen[j+1].id)
			{
				aux=almacen[j];
				almacen[j]=almacen[j+1];
				almacen[j+1]=aux;
			}
		}
	}
}//termina ordenar 
