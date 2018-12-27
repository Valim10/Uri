
inter = 0
gremio = 0
empate = 0
grenais = 0
while 1:
    entrada = raw_input().split()
    if int(entrada[0]) > int(entrada[1]) :
        inter= inter + 1
    elif int(entrada[0]) < int(entrada[1]) :
        gremio = gremio + 1
    else:
        empate = empate + 1
    print "Novo grenal (1-sim 2-nao)"
    grenais = grenais + 1
    x = input()
    if x==2:
        print "%d grenais"%(grenais)
        print "Inter:%d"%(inter)
        print "Gremio:%d"%(gremio)
        print "Empates:%d"%(empate)
        if inter>gremio :
            print "Inter venceu mais"
        elif gremio>inter:
            print "Gremio venceu mais"
        else:
            print "Nao houve vencedor"
            
        break
