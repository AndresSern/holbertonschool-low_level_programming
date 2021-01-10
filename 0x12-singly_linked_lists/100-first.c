#include <stdio.h>
/*
 * Apply the constructor attribute to startupfun()
 * so that it is executed before main()
*/
	void startupfun(void) __attribute__ ((constructor));

/*
 * Apply the destructor attribute to cleanupfun()
 *so that it is executed after main()
 */

	void cleanupfun(void)__attribute__ ((destructor));
/**
 * startupfun - This functions print a text
 *
 */
	void startupfun(void)
	{
		printf("You're beat! and yet, you must allow,");
		printf("\nI bore my house upon my back!\n");
	}
