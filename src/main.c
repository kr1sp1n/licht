#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("licht - print n times a symbol\nusage: licht <n> <symbol>\nexample: licht 10811 A\n");
		return 0;
	}
	
	int i;
	char* symbol = argv[2];
	int size = atoi(argv[1]);
	for(i = 0; i < size; i++)
	{
		printf("%s", symbol);
	}
	printf("\n");
	return 0;
}
