#include <stdio.h>

int main ()
{
int DNI, PROM=0, EXAM=0, REP=0, CF;
float N1, N2, NOTA, NE, NP, NR, PPROM, PEXAM, PREP;



printf("\n INGRESE EL DNI DEL ALUMNO (DNI < 0 FINALIZAR)\t");
scanf ("%d",&DNI);



while (DNI>0)
{
do
{
printf("\nINGRESE LA PRIMER NOTA\t");
scanf("%f",&N1);
} while (N1<1 || N1>10);
do
{
printf("INGRESE LA SEGUNDA NOTA\t");
scanf("%f",&N2);
} while (N2<1 || N2>10);



NOTA=N1+N2;



if (N1>=7 && N2>=7)
{
PROM++;
NP+=NOTA/2;
printf("\nEl alumno con DNI %d obtuvo las notas %.2f y %.2f PROMOCINADO\n",DNI, N1, N2);
}
else
{
if (N1>=4 && N2>=4)
{
EXAM++;
NE+=NOTA/2;
printf("\nEl alumno con DNI %d obtuvo las notas %.2f y %.2f EXAMEN FINAL\n",DNI, N1, N2);
}
else
{
REP++;
NR+=NOTA/2;
printf("\nEl alumno con DNI %d obtuvo las notas %.2f y %.2f REPROBADO\n",DNI, N1, N2);
}
}



printf("\n INGRESE EL DNI DEL ALUMNO (0 FINALIZAR)\t");
scanf ("%d",&DNI);
}



PPROM=NP/PROM;
PEXAM=NE/EXAM;
PREP=NR/REP;



printf("\nHUBO %d ALUMNOS QUE PROMOCIONARON CON UN PROMEDIO DE %.2f",PROM, PPROM);
printf("\nHUBO %d ALUMNOS QUE VAN A EXAMEN CON UN PROMEDIO DE %.2f",EXAM, PEXAM);
printf("\nHUBO %d ALUMNOS QUE REPROBARON CON UN PROMEDIO DE %.2f",REP, PREP);



return 0;
}
