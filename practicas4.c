#include<stdio.h>
#include<string.h>

struct persona{
	int nume;
	char na[10];
	char ap[10];
	int ed;
	char ca[10];
	char ecuipo[10];
}persona[5];

void toditos(int i);
void guarda();
int comp_cate(char busca[]);
void comp_equi(char busca[]);
void menux();
int i=0;
int main(){	
	FILE * libro;
	int ii=0;
//	libro=fopen("C:/PRO/bsket.txt", "w");
//	libro=fopen("C:/PRO/bskt.txt", "a"); 
//libro=fopen("C:/PRO/bsket.txt", "r");
	int elige, index;
	char categoria[10];
	/*for(index=0;index<5;index++){
		fscanf(libro,"%d",&persona[index].nume);
		fgets(persona[index].na,10,libro);
	    printf("%d-> %s",persona[index].nume,persona[index].na);
	}
	fscanf(libro,"%d",&persona[index].nume);
	fgets(persona[index].na,10,libro);
    fgets(persona[index].ap,10,libro);
    fscanf(libro,"%d",&persona[index].ed);
    fgets(persona[index].ca,10,libro);
	fgets(persona[index].ecuipo,10,libro);
	printf("%s\n",persona[index].ecuipo);
    printf("%d %s %s %d %s %s\n",persona[index].nume,persona[index].na,persona[index].ap,persona[index].ed,persona[index].ca,persona[index].ecuipo);
*/	
//	fflush(libro);
	do{
		
		menux();
		scanf("%d",&elige);
		system("cls");
	
		switch(elige){
			case 1:
				libro=fopen("C:/PRO/basket.txt","a");
				printf("hola\n");	
				printf("Inserte el no. de jugador\n");
				scanf("%d",&persona[i].nume);
				printf("Inserte el nombre del jugador\n");
				fflush(stdin);
				gets(persona[i].na);
				printf("Inserte el apellido del jugador\n");
				fflush(stdin);
				gets(persona[i].ap);
				printf("Inserte la edad del jugador\n");
				scanf("%d",&persona[i].ed);
				printf("Inserte la categoria del jugador\n");
				fflush(stdin);
				gets(persona[i].ca);
				printf("Inserte el equipo. del jugador\n");
				fflush(stdin);
				gets(persona[i].ecuipo);
				fflush(stdin);
				printf("usu");
				fprintf(libro,"%d %s %s %d %s %s\n",persona[i].nume,persona[i].na,persona[i].ap,persona[i].ed,persona[i].ca,persona[i].ecuipo);
			//	toditos(i);
				i++;
				break;
	    	case 2:
	    		printf("¿Que categoria busca?\n");
	    		fflush(stdin);
	    		gets(categoria);
	    		comp_cate(categoria); 
			
			     break;
			case 3:
				 printf("¿Que equipo busca?\n");
	    		 fflush(stdin);
	    		 gets(categoria);
				 comp_equi(categoria);
				    
				 break;	 
			case 4:
			 	ii=0;
				while(ii<5){
					printf("\t%d  %s  %s  %d  %s  %s  \t\n",persona[ii].nume,persona[ii].na,persona[ii].ap,persona[ii].ed,persona[ii].ca,persona[ii].ecuipo);
					ii++;
				}	
				printf("\n----------------By. ADrian Solis----------------\n");
			    break;	 
		
			case 5:
				if((libro=fopen("C:/PRO/basket.txt","w"))==NULL){
					printf("No se creo el archivo\n");
				}else {
					printf("El archivo esta creado\n");
					
				}
				break;
			case 6:
				index=0;
				libro=fopen("C:/PRO/basket.txt", "r");		
				while(index<5){
					fscanf(libro,"%d",&persona[index].nume);
					fscanf(libro,"%s",&persona[index].na);		
					fscanf(libro,"%s",&persona[index].ap);
    				fscanf(libro,"%d",&persona[index].ed);	
					fscanf(libro,"%s",&persona[index].ca);
					fscanf(libro,"%s",&persona[index].ecuipo); 
					   			
					index++; 
			    }
					printf("Todo fue descargado con exito\n");
				
				break;	
			default:printf("\tHasta luego\n\t----------------------------\n");	
			}//fin switch		
		fclose(libro);
	
	}while(elige!=7);


	
	
}//fin main
void menux(){
	printf("¿Que desea hacer?\n");
	printf("1)->Registrar\n");
	printf("2)->Ver registro por categorías\n");
	printf("3)->ver registro por equipos\n");
	printf("4)->Imprimir todo\n");
	printf("5)->Crear archivo\n");
	printf("6)->Descargar base de datos\n");
	printf("7)->Salir\n");
}//fin menux
void guarda(){
    

	printf("Inserte el no. de jugador\n");
	scanf("%d",&persona[i].nume);
	printf("Inserte el nombre del jugador\n");
	fflush(stdin);
	gets(persona[i].na);
	printf("Inserte el apellido del jugador\n");
	fflush(stdin);
	gets(persona[i].ap);
	printf("Inserte la edad del jugador\n");
	scanf("%d",&persona[i].ed);
	printf("Inserte la categoria del jugador\n");
	fflush(stdin);
	gets(persona[i].ca);
	printf("Inserte el equipo. del jugador\n");
	fflush(stdin);
	gets(persona[i].ecuipo);
	system("cls");

}//fin guarda
int comp_cate(char busca[]){
	int o;
	do{
		strlwr(busca);
		strlwr(persona[o].ca);
		strcmp(busca,persona[o].ca);
		if(strcmp(busca,persona[o].ca)==0){
			printf("\t|%d|%s|%s|%d|%s|%s|\t\n",persona[o].nume,persona[o].na,persona[o].ap,persona[o].ed,persona[o].ca,persona[o].ecuipo);
		}
		o++;
	}while(o<5);
	printf("\n----------------By. ADrian Solis----------------\n");
	int ent=strcmp(busca,persona[o].ca);
	
 return ent;
}
void comp_equi(char busca[]){
	int u;
	do{
		strlwr(busca);
		strlwr(persona[u].ecuipo);
		strcmp(busca,persona[u].ecuipo);
		if(strcmp(busca,persona[u].ecuipo)==0){
			printf("\t|%d|%s|%s|%d|%s|%s|\t\n",persona[u].nume,persona[u].na,persona[u].ap,persona[u].ed,persona[u].ca,persona[u].ecuipo);
		}
		u++;
	}while(u<5);
	printf("\n----------------By. ADrian Solis----------------\n");	
}
void toditos(int i){
	int ii=0;
	while(ii<=i){
		printf("\t %d  %s  %s  %d  %s  %s  \t\n",persona[ii].nume,persona[ii].na,persona[ii].ap,persona[ii].ed,persona[ii].ca,persona[ii].ecuipo);
		ii++;
	}
	printf("\n----------------By. ADrian Solis----------------\n");
}
