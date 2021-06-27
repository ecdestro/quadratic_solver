#include <stdio.h>
#include <math.h>	/* Included for sqrt() and fabs() */
#include <errno.h>
#include <stdlib.h>	/* Included for atof() */

int main(int argc, char *argv[]) {
	float a, b, c, disc, root1, root2, real, imaginary = 0;

	if((argc != 4) || (atof(argv[1]) == 0)) {
		errno = 1;
		perror("Use EXACTLY three numbers, a, b, and c separated by spaces. a cannot equal zero");
	}
	else {
		a = atof(argv[1]);
		b = atof(argv[2]);
		c = atof(argv[3]);
		disc = (b * b) - (4 * a * c);

		if(disc > 0) {
			root1 = (-b + sqrt(disc)) / (2 * a);
			root2 = (-b - sqrt(disc)) / (2 * a);
			printf("root 1: %.5lf\n", root1);
			printf("root 2: %.5lf\n", root2);
		}
		else if(disc == 0) {
			root1 = root2 = -b / (2 * a);
			printf("Both roots: %.5lf\n", root1);
		}
		else {
			real = -b / (2 * a);
			imaginary = sqrt(fabs(disc)) / (2 * a); /* sqrt() won't take a negative argument, so we find the floating point absolute value with fabs() */
			printf("iroot1: %.5lf+%.5lfi\n", real, imaginary);
			printf("iroot2: %.5lf-%.5lfi\n", real, imaginary);
		}
	}

	return 0;
}
