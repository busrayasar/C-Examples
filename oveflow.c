#include<stdio.h>
#include<unistd.h>

//oveflow example- Busra Yasar
int main(void){
	int i=1;
	while(1){
		printf("%i\n", i);
		i*=2;
		sleep(1);
	}
}
