vert =  raw_input()
especie = raw_input()
tipo = raw_input()


if vert == "vertebrado" :
    if especie == "ave" :
        if tipo == "carnivoro" :
            print "aguia"
        else:
            print "pomba"

    else:
        if tipo == "onivoro" :
            print "homem"
        else:
            print "vaca"

else :
    if especie == "inseto" :
        if tipo == "hematofago" :
            print "pulga"
        else:
            print "lagarta"

    else:
        if tipo == "hematofago" :
            print "sanguessuga"
        else:
            print "minhoca"


    
