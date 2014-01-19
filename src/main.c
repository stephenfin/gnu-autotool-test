/* main.c - simple hello world example application
 *
 *
 */

#include <config.h>
#include <stdio.h>
#include "main.h"

void
hello_world(char *name)
{
    puts(HELLO_STRING);
    printf("Hey %s.\n", name);
    puts("This is " PACKAGE_STRING ".");
}

int
main (void)
{
    hello_world("John");
    return 0;
}
