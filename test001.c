/* test */
#include <stdio.h>
#include <memory.h>

typedef struct {
	int x;
	int y;
} POS;

int main(int argc,char *argv[])
{
	POS	p;
	memset(&p,0,sizeof(POS));

	printf("Hello World!!\n");

	return 0;
}
