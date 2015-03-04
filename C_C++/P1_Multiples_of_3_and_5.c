#include <stdio.h>

#define LIMIT 1000
int isMultOf3Or5(int num){
	if (num % 3 == 0)
		return 1;
	else if(num % 5 == 0)
		return 1;
	else return 0;
}
int getSumOfMulti(){
	int sum = 0, i = 0;
	
	for ( i = 3; i < LIMIT ; i++){
		if(isMultOf3Or5(i)==1)
			sum += i;
	}
	return sum;
}

int main(int argc, char *argv[]) {
	
	int total = getSumOfMulti();
	
	printf("%d",total);
	
	
	return 0;
}

