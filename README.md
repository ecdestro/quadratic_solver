# quadratic_solver
Given three values, compute the answer(s) (zeroes) to the quadratic formula to five decimal places.

Depends on math.h, errno.h, and stdlib.h

Link with libm, it's not enough to just include math.h
```
gcc -o quad quad_solv.c -lm
```
Takes exactly three real number arguments in order a b c. a should never be set to zero.
```
./quad 48.96557 200.68 17.41
root 1: -0.08867
root 2: -4.00972
```
```
./quad 2 4 2
Both roots: -1.00000
```
```
./quad 10 20 40
iroot1: -1.00000+1.73205i
iroot2: -1.00000-1.73205i
```
# The Maths
This program will give different results depending on the domain of the discriminant (the result under the square root symbol)

&radic;(b<sup>2</sup>-4ac)

If this value under the radical is greater than zero, the program prints two solutions (zeroes) of the equation (parabola crosses x-axis twice) 

If this value under the radical equals zero, the program prints the single solution of the equation (parabola touched x-axis at a single point of the curve, the minimum or maximum)

If this value under the radical is less than zero, the program prints the imaginary number solutions to the equation (and the graph of the parabola never touches or intersects the x-axis)

