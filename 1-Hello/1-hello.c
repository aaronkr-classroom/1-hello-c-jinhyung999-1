#include <stdio.h>
#include <time.h>

int main(void) {
	char name[9]="Jinhyung";
	float age = 20.5;

	printf("Hello, my name is  %s\n", name);
	printf("\tI am %.1f years old\n\n", age);
	
	time_t time1;
	time1 = time(NULL);
	printf("%1u",(unsigned long int)time1);
	//printf(name);

	return 0; // 0_양수 1_음수
}