#include <stdlib.h>
#include<string.h>
#include <stdarg.h>
#include <stdio.h>

typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

int (*get_op_func(char *s))(int a, int b);

int op_add(int a, int b)
{
        return a + b;
}
int op_sub(int a, int b)
{
        return a - b;
}
int op_mul(int a, int b)
{
        return a * b;
}
int op_div(int a, int b)
{
        return a / b;
}
int op_mod(int a, int b)
{
        return a % b;
}
int main(int ac, char*av[])
{
    int numb1, numb2, result;
    int (*fun)(int, int);
    if(ac != 4)
    {
        printf("bad");
        return -1;
    }
    numb1 = atoi(av[1]);
    numb2 = atoi(av[3]);
    fun = get_op_func(av[2]);
    printf("result %d\n", fun(numb1, numb2));
    
    return 0;
}

	int (*get_op_func(char *s))(int a, int b)
{
op_t ops[] =
    {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
	i = 0;
    while(ops[i].op != NULL)
    {
        if (ops[i].op[0] == *s)
        {
            return ops[i].f;
        }
        i++;
    }
    return NULL;
}

