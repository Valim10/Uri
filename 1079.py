a= raw_input()
a=int(a)
i=0

for  i in range(a):
    n1,n2,n3=raw_input().split()
    n1 = float(n1)
    n2 = float(n2)
    n3 = float(n3)
    print "%.1f"%((n1*0.2 + n2*0.3 + n3*0.5)) 
 
