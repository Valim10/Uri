x = 0
media = 0
while x < 2 :
    entrada = input()
    if  float(entrada) < 0 or float(entrada) > 10:
        print "nota invalida"
    else:
        media = media + float(entrada)
        x=x+1

    if x==2:
        print "media = " + str(float(media/2))
        break
