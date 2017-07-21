/*************************************************************************
    > File Name: variable.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017/7/21 11:45:41
 ************************************************************************/

/*************************************************************************
#include<stdio.h>

    > File Name: variable.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017/7/21 11:45:41
 ************************************************************************/

#include<stdio.h>

// variable declare
extern int a, b;
extern int c;
extern float f;

int main()
{
	/* variable define */
	int a, b;
	int c;
	float f;

	/* initialization */
	a= 10;
	b=20;

	c=a+b;
	printf("value of c: %d \n", c);

	f=70.0/3.0;
	printf("value of f: %f \n", f);

	return 0;
}
