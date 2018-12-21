
while 1 :
    entrada = raw_input().split()
    if int(entrada[0]) <= 0 or int(entrada[1]) <= 0:
        break
    
    saida = 0
    i = 0
    lista =[]
    soma = 0
    if int(entrada[0]) > int(entrada[1]):
        lista= list(range(int(entrada[1]),int(entrada[0])+1))
    else:
        lista= list(range(int(entrada[0]),int(entrada[1])+1))
    for i in lista:
        print i,
        soma = soma + i
    a = "Sum="+str(soma)
    
    print a    
    
