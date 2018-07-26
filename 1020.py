entrada = input()
anos =0
meses =0
dias = 0
while entrada > 0 :
    if entrada/ 365:
      anos =+ int(entrada/365)
      entrada = entrada % 365 
    elif entrada/ 30:
       meses =+ int(entrada/30)
       entrada = entrada % 30
    else :
       dias = int(entrada)
       entrada = 0

print (str(anos) + ' ano(s)\n'+ str(meses)+' mes(es)\n'+ str(dias) + ' dia(s)')
