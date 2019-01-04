while 1:
    valor,valor1 = raw_input().split()
    
    v1 = int(valor)
    v2 = int(valor1)
    v12 = long (1)
    v22 = long(1)

    if v1 > 0:
        while v1 >0 :
            v12 *= v1
            v1=v1 - 1
    else:
        v12 = 1

    if v2 > 0:
        while v2 >0 :
            v22 *= (v2)
            v2-=1
    else:
        v22 = 1

    print v12+v22
