a,c,b,d = raw_input().split()
a = int(a)
b = int(b)
c = int(c)
d = int(d)
if a < b :
    if c < d :
        print "O JOGO DUROU %d HORA(S)"%(b - a),"E %d MINUTO(S)"%(d-c)
    elif c == d :
        print "O JOGO DUROU %d HORA(S)"%(b - a),"E 0 MINUTO(S)"
    else :
        c = 60 - c
        result = d + c
        print "O JOGO DUROU %d HORA(S)"%(b-a-1),"E %d MINUTO(S)" %result
       
elif a == b:
    if c < d :
        print "O JOGO DUROU %d HORA(S)" %(b - a),"E %d MINUTO(S)" %(d-c)
    elif c == d :
        print "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"
    else :
        c = 60 - c
        result = d + c
        print "O JOGO DUROU 23 HORA(S) E %d MINUTO(S)" %result

elif a > b:
     
     a = 24 - a
     result = b + a
     if c < d :
         print "O JOGO DUROU %d HORA(S)"%(result),"E %d MINUTO(S)"%(d-c)
     elif c == d :
         print "O JOGO DUROU %d HORA(S) E 0 MINUTO(S)" %(result)
     else :
         c = 60 - c
         result2 = d + c
         print "O JOGO DUROU %d HORA(S)"%(result-1),"E %d MINUTO(S)" %result2

