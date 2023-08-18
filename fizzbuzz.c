#include <stdio.h>

int main() {
	for (int i = 1;i <= 100;i++) { // start with 1
		if (i % 3 == 0) {
			printf("Fizz,");
		}
		else if (i % 5 == 0) {
			printf("Buzz,");
		}
		else if(i % 3==0 && i % 5==0){
			printf("FizzBuzz,");
		}
		else {
			printf("%d,", i);
		}
	}
	return 0;
}
