a,b = raw_input().split()
a = int(a)
b = int(b)

if a < b :
    print "O JOGO DUROU %d HORA(S)" %(b - a)
elif a == b:
    print "O JOGO DUROU 24 HORA(S)"
elif a > b:
     a = 24 - a
     result = b + a
     print "O JOGO DUROU %d HORA(S)" %result
    
