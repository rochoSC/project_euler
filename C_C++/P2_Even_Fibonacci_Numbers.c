#include <stdio.h>

#define LIMIT 4000000
int sumFibb(){
	int f1 = 1, f2=2;
	int sum = 0, aux = 0;
	
	while(f2 < LIMIT){		
		if(f2 % 2 == 0) //Adding only even-valued terms
			sum += f2;
		aux = f1;
		f1 = f2;
		f2 = f2 + aux;
	}
	return sum;
}

int main(int argc, char *argv[]) {
	
	printf("%d", sumFibb());
	return 0;
}

