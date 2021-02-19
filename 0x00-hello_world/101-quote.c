#include <stdio.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
/**
 * main - Prints quote
 *
 * Return: zero on success
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
