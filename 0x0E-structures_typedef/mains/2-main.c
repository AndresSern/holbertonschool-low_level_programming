#include <stdio.h>
#include "dog.h"


/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = NULL;
    my_dog.age = 4.3;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
