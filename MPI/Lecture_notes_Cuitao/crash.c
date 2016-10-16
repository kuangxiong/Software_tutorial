#include <stdio.h>
#include <stdlib.h>
void f();
int main(int argc,char* argv[])
{
	int input =0;
        int i;
	printf("Input an integer:");
	scanf("%d", &input);
	printf("The integer you input is %d\n", input);
        for(i=0;i<input;i++)
          f();
	return 0;
}

void f()
{
        int *a;
        a=(int*)malloc(10*sizeof(*a));
        free(a);
        return;
}


