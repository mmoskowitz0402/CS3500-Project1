#include <stdio.h>
#include <math.h>

int main() {
	int arrayFib[10] = {0,1,1,2,3,5,8,13,21,34};
	double total = 0;

	int i;
	for (i = 0; i < 10; i++) {
		total = total + sqrt(arrayFib[i]);
	}

	double average = total / 10;

	printf("Average square root value of the array: %f \n", average);
	return 0;
}
