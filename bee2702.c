#include <stdio.h>

int main(){
	
	int r1, r2, r3, p1, p2, p3, soma;
	
	scanf("%d %d %d", &r1, &r2, &r3);
	scanf("%d %d %d", &p1, &p2, &p3);
	
	if(r1 < p1){
	 soma = p1 - r1;	
	}
	
	if(r2 < p2){
		soma += p2 - r2;
	}
	
	if(r3 < p3){
		soma += p3 - r3;
	}
	
	printf("%d\n", soma);
	
	return 0;
}
	

