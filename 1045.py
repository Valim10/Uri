a,b,c = raw_input().split()
a = float(a)
b = float(b)
c = float(c)
vetor = []
vetor.append(a)
vetor.append(b)
vetor.append(c)
vetor.sort(reverse=True)
a = vetor[0]
b = vetor[1]
c = vetor[2]

if ( a >= b + c):
    print "NAO FORMA TRIANGULO"
    
elif (a*a) == (b*b) + (c*c) :
    print "TRIANGULO RETANGULO"
elif (a*a) > (b*b) + (c*c) :
    print "TRIANGULO OBTUSANGULO"
elif (a*a) < (b*b) + (c*c) :
    print "TRIANGULO ACUTANGULO"

if a==b==c :
    print "TRIANGULO EQUILATERO"
elif a==b or b==c or c==a :
    print "TRIANGULO ISOSCELES"
    
