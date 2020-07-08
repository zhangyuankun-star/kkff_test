#include <stdio.h>

int main(int argv,char *argc[]){
	int i;
	for(i = 1 ; i < argv ; i++){
		printf("%s",argc[i]);
		printf(" ");
	}
	printf("\n");
	return 0;
}
