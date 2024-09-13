#include <stdio.h>
#include <limits.h>

int main(void) {
	//char
	char ch = 'A';
	printf("char:\n");
	printf("Value: %c\n", ch);
	printf("Max: %d\n", CHAR_MAX); //limit의 상수 사용
	printf("Min: %d\n", CHAR_MIN);

	// signed short
	signed short int sshort= 1234;
	printf("signed short:\n");
	printf("Value: %c\n", sshort);
	printf("Max: %d\n", SHRT_MAX); //limit의 상수 사용
	printf("Min: %d\n", SHRT_MIN);
	
	// unsigned short
	unsigned short int ushort = 1234U;
	printf("signed short:\n");
	printf("Value: %u\n", ushort);
	printf("Max: %u\n", USHRT_MAX); //limit의 상수 사용
	//printf("Min: %u\n", USHRT_MIN);

	// signed int
	signed int sint = 12345;
	printf("\nsigned int:\n");
	printf("Value: %c\n", sint);
	printf("Max: %d\n", INT_MAX); //limit의 상수 사용
	printf("Min: %d\n", INT_MIN);

	// unsigned int
	unsigned int uint = 12345U;
	printf("signed uint:\n");
	printf("Value: %u\n", uint);
	printf("Max: %u\n", UINT_MAX); //limit의 상수 사용
	//printf("Min: %u\n", UINT_MIN);
	
	// signed long
	signed long int slong = 123456789L;
	printf("\nsigned long:\n");
	printf("Value: %ld\n", slong);
	printf("Max: %ld\n", LONG_MAX); //limit의 상수 사용
	printf("Min: %ld\n", LONG_MIN);

	// unsigned long
	unsigned long int ulong = 123456789U;
	printf("signed ulong:\n");
	printf("Value: %lu\n", ulong);
	printf("Max: %lu\n", ULONG_MAX); //limit의 상수 사용
	//printf("Min: %lu\n", ULONG_MIN);

	return 0;
}