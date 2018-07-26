entrada = input()
horas =0
minutos =0
segundos = 0
while entrada > 0 :
    if entrada/ 3600:
      horas =+ int(entrada/3600)
      entrada = entrada % 3600 
    elif entrada/ 60:
       minutos =+ int(entrada/60)
       entrada = entrada % 60
    else :
       segundos = int(entrada)
       entrada = 0

print (str(horas) + ':'+ str(minutos)+':'+ str(segundos))
