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
impares =0
positivos = 0
negativos = 0

if( a %2 == 0 ):
    pares+=1
else:
    impares +=1
if( b %2 == 0 ):
    pares+=1
else:
    impares +=1

if( c %2 == 0 ):
    pares+=1
else:
    impares +=1

if( d %2 == 0 ):
    pares+=1
else:
    impares +=1

if( e %2 == 0 ):
    pares+=1
else:
    impares +=1

if( a >0 ):
    positivos+=1
elif a < 0:
    negativos +=1

if( b > 0 ):
    postivos+=1
elif b < 0:
    negativos +=1

if( c > 0 ):
    positivos+=1
elif c < 0:
    negativos +=1

if( d > 0 ):
    positivos+=1
elif d < 0:
    negativos +=1

if( e > 0 ):
    positivos+=1
elif e < 0:
    negativos +=1

    
print pares, "valor(es) par(es)"
print impares, "valor(es) impar(es)"
print positivos, "valor(es) positivo(s)"
print negativos, "valor(es) negativo(s)"
