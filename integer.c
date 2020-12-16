//consider the following program. Assuming the user correctly types an integer into stdin, what will be the program output in the end?
#include <stdio.h>
int main () {
int x = 0;
printf ("Please input an integer:");
scanf ("%” d “, &x);
printf ("%d", (!!x) << 31);
}
