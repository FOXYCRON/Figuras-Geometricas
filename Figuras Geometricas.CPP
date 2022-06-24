/* Formulas para obtener el Area de las figuras geometricas */
#include<conio.h>
#include<stdio.h>
float area, base, altura;
int ac, lado;
float diagonalmay, diagonalmen;

main()
{
	area=0;
	printf("AREA DE FIGURAS GEOMETRICAS \n\n");
   /* Area de un  triangulo */
   printf(" Dame el valor de la base: "); scanf("%f", &base);
   printf("\n Dame el valor de la altura: "); scanf("%f", &altura);
   area=(base*altura)/2;
   printf("\n El area del triangulo es: %.1f",area);
   getch();

     /* Area de un cuadrado */
        printf("\n \n Area de un cuadrado \n \n");
        printf(" Dame el valor del lado: "); scanf("%d", &lado);
        ac=lado*lado;
        printf("\n El area del cuadrado es: %.d", ac);
     getch();

     /* Area de un rectangulo */
        printf("\n \n Area de un rectangulo ");
        printf("\n Dame el valor de la base: "); scanf("%f", &base);
        printf("\n Dame el valor de la altura: "); scanf("%f", &altura);
  	     area=(base*altura)/2;
 	     printf("\n El area del rectangulo es: %.1f",area);
     getch();

     /* Area de un Rombo */
        printf("\n \n Area de un rombo ");
        printf("\n Dame el valor de la diagonal mayor: "); scanf("%f", &diagonalmay);
        printf("\n Dame el valor de la diagonal menor: "); scanf("%f", &diagonalmen);
  	     area=(base*altura)/2;
 	     printf("\n El area del Rombo es: %.1f",area);
     getch();

}
