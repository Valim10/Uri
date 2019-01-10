
alcool = 0
gasolina = 0
diesel = 0

while 1:
    entrada = input()
    if entrada == 1 :
        alcool+=1
    if entrada == 2 :
        gasolina+=1
    if entrada == 3 :
        diesel+=1
    if entrada == 4 :
        print "MUITO OBRIGADO"
        print "Alcool: %d"%(alcool)
        print "Gasolina: %d"%(gasolina)
        print "Diesel: %d"%(diesel)
        break
