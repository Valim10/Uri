quant = input()
i = 0
while i < quant :
     entrada = raw_input().split()
     entrada[1] = entrada[1] + 'a'
     entrada[0] = entrada[0] + 'a'
     v=0
     if entrada[1] in entrada[0]:
         print "encaixa"
     else:
         print "nao encaixa"
     i+=1



    
