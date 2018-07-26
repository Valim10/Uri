x = raw_input()
x = float(x)
x = round(x,2)
if  x >= 0.00 and x <= 400.00 :
    xn = x*1.15
    print "Novo salario: %.2f" %xn
    print "Reajuste ganho: %.2f" %(xn-x)
    print "Em percentual: 15 %"
elif  x >=400.01 and x<=800.00 :
    xn = x*1.12
    print "Novo salario: %.2f" %xn
    print "Reajuste ganho: %.2f" %(xn-x)
    print "Em percentual: 12 %"
elif  x >=800.01 and x<=1200.00 :
    xn = x*1.10
    print "Novo salario: %.2f" %xn
    print "Reajuste ganho: %.2f" %(xn-x)
    print "Em percentual: 10 %"
elif  x >=1200.01 and x<=2000.00 :
    xn = x*1.07
    print "Novo salario: %.2f" %xn
    print "Reajuste ganho: %.2f" %(xn-x)
    print "Em percentual: 7 %"
elif  x > 2000.00 :
    xn = x*1.04
    print "Novo salario: %.2f" %xn
    print "Reajuste ganho: %.2f" %(xn-x)
    print "Em percentual: 4 %"
    
