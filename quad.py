import sys
import math
import cmath

a = float(sys.argv[1])
b = float(sys.argv[2])
c = float(sys.argv[3])
disc = ((b ** 2) - (4 * a * c))

if a == 0:
	sys.exit("a cannot equal 0")
elif disc > 0:
	root1 = ((-b + math.sqrt(disc)) / (2 * a))
	root2 = ((-b - math.sqrt(disc)) / (2 * a))
	print("root 1: ", '%.5f'%root1)
	print("root 2: ", '%.5f'%root2)
elif disc == 0:
	root1 = -b / (2 * a)
	print("Both roots: ", '%.5f'%root1)
else:
	real = -b / (2 * a)
	imaginary = cmath.sqrt(disc) / (2 * a)
	print("iroot 1: ", real, "+", imaginary)
	print("iroot 2: ", real, "-", imaginary)
