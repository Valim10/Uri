a= raw_input()
b= raw_input()
c= raw_input()
d= raw_input()
e= raw_input()
f= raw_input()

a=float(a)
b=float(b)
c=float(c)
d=float(d)
e=float(e)
f=float(f)
x= positivo =0

if( a > 0 ):
    positivo+=1
    x +=a
if( b > 0 ):
    positivo+=1
    x +=b
if( c > 0 ):
    positivo+=1
    x +=c
if( d > 0 ):
    positivo+=1
    x +=d
if( e > 0 ):
    positivo+=1
    x +=e
if( f > 0 ):
    positivo+=1
    x +=f
print positivo, "valores positivos"
print "%.1f"%(x/positivo)
