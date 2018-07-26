x = raw_input()
x = float(x)
#x = round(x,2)
if  x >= 0.00 and x <= 2000.00 :
    print "Isento"
elif  x >=2000.01 and x<=3000.00 :
    xn = (x - 2000)*0.08 
    print "R$ %.2f" %xn
elif  x >=3000.01 and x<=4500.00 :
    xn1 = (1000)*0.08
    xn2 =  xn1 + (x-3000)*0.18
    print "R$ %.2f" %xn2
elif  x > 4500.00 :
    xn1 = 1000*0.08
    xn2 = (1500)*0.18
    xn3 =  xn1 + xn2 + (x-4500)*0.28
    print "R$ %.2f" %xn3
    
