#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int bof(char *str)
{
	char buffer[24]; //buffer size 24
	strcpy(buffer, str);
	
	return 1;
}

int main(int argc, char **argv)
{
	char str[517];
	FILE *test_file;
	
	test_file = fopen("test_file","r");
	fread(str, sizeof(char), 517, test_file); 
	bof(str); //buffer size 517 input function buffer size 24
	printf("returned properly\n");
	return 1;
}
