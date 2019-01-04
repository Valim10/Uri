entrada = input()
a = 1
while entrada>0:
    linha = raw_input().split()
    saida = ""
    letra = 0 
    while 1 :
        if ( letra < len(linha[0])):
            for i in range(letra,len(linha[0])):
                print i
        letra+=1
    
    print saida
    entrada-=1
    
