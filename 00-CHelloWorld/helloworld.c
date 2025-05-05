#include <stdio.h>

int main()
{
	char mensaje[] = "Hola Mundo - desde C";
	FILE *archivo = fopen("output.txt", "w");

	//print a consola
	printf("%s", mensaje);
	printf("%s", "\n");

	//escritura a Archivo
	fputs(mensaje, archivo);

	fclose(archivo);
	
	return 0;
}