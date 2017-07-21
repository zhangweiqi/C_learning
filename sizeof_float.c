/*************************************************************************
    > File Name: sizeof_float.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017/7/21 11:17:55
 ************************************************************************/

/*************************************************************************
#include<stdio.h>

    > File Name: sizeof_float.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017/7/21 11:17:55
 ************************************************************************/

#include<stdio.h>
#include<float.h>

int main()
{
	printf("float max byte: %lu \n", sizeof(float));
	printf("float min byte: %E \n", FLT_MIN);
	printf("float max byte: %E \n", FLT_MAX );
	printf("precession: %d \n", FLT_DIG);
	
	return 0;
}
