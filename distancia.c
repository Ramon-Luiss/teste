
#include <stdio.h>
#include <math.h>

float calculaDistancia(int x1, int y1, int x2,int y2){
return sqrt (pow (x2-x1,2)+pow(y2-y1,2));	
}
int main (){
	int x1, y1, x2, y2;
	float distancia;
	printf("Coordenadas primmeiro ponto : ");
	scanf("%i %i", &x1, &y1);
	printf("Coordenadas segundo ponto : ");
	scanf("%i %i", &x2, &y2);
}
