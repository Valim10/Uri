quant = input()
i = 0
while i < quant :
    entrada = raw_input().split()
    flag = 0
    saida = 0
    if int(entrada[0]) > int(entrada[1]) :
        init = int(entrada[1])+1
        while init < int(entrada[0]):
            if init % 2 != 0:
                saida = saida + init
            init= init + 1
    else:
        init = int(entrada[0])+1
        while init < int(entrada[1]):
            if init % 2 != 0:
                saida = saida + init
            init= init + 1

    i=i +1
    print saida
    
     
         
