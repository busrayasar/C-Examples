//busra yasar 
#include<stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	printf("This is a converter cm to inches, feet  and yard. /n  ");
	float inches = 0.393700787;
	float feet = 0.032808399;
	float yard = 0.010936133;
	float cm = atof(argv[1]);
	printf(" cm %lf , inch: %lf, feet: %lf, yard: %lf ", cm, cm*inches, cm*feet, cm*yard); 
	
	return 0;
}
//In cmd first compile with " gcc cm2ify.c " command then run as  "cm2ify.exe cmdInput" 
