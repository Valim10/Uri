a= raw_input()
b= raw_input()
c= raw_input()
d= raw_input()
e= raw_input()


a=float(a)
b=float(b)
c=float(c)
d=float(d)
e=float(e)

pares =0

if( a %2 == 0 ):
    pares+=1
if( b %2 == 0 ):
    pares+=1
if( c %2 == 0 ):
    pares+=1
if( d %2 == 0 ):
    pares+=1
if( e %2 == 0 ):
    pares+=1
print pares, "valores pares"
