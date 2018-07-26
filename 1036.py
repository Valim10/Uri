# -*- coding: utf-8 -*-

import math
A,B,C = raw_input().split(" ")
A = float(A)
B = float(B)
C = float(C)
x = B*B - 4*A*C
x1 = (- B + x**0.5 )
x2 = (- B - x**0.5 )
if A != 0:
    x1 =  x1 / (2*A)
    x2 = x2 / (2*A)

if (x < 0 and A != 0.0) or (A == 0.0) :
    print "Impossivel calcular"
else:
    print ("R1 = %.5f" % x1)
    print ("R2 = %.5f" % x2)
 
