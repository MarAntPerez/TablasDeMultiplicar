#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i = 1;
	int j = 1;
	
	for(i = 1; i <= 10; i++){
		for(j = 1; j <= 10; j++){
			printf("\n%i x %i = %i", i, j, i*j);
		}
		printf("\n");
	}
	
	return 0;
}
