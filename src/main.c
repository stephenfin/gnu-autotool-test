/* main.c - simple hello world example application
 *
 *
 */

#include <config.h>
#include <stdio.h>

int
main (void)
{
    puts("Hello, world!");
    puts("This is " PACKAGE_STRING ".");
    return 0;
}
