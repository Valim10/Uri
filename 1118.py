x = 0
media = 0
sair = 0
while x < 2 :
    entrada = input()
    if  float(entrada) < 0 or float(entrada) > 10:
        print "nota invalida"
    else:
        media = media + float(entrada)
        x=x+1

    if x==2:
        print("media = %.2f" % round(float(media/2),2))
        while 1 :
            print "novo calculo (1-sim 2-nao)"
            sair = input()
            if sair == 1:
                media = 0
                x = 0
                break
            elif sair == 2:
                break
        if sair == 2:
            break
            
                    
