#include <stdio.h>
#include <string.h>


typedef struct
{
	char *ptr;
	float f;
	char arr[10];
} target_struct;

target_struct *hello(target_struct *target)
{
	static char tmp = 0x30;

	target->ptr = &tmp;
	target->f = 3.1;

	memset(target->arr, 1, sizeof(target->arr));
	return target;
}
