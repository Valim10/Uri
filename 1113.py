
while 1 :
    entrada = raw_input().split()
    if int(entrada[0]) > int(entrada[1]):
        print "Decrescente"
    elif int(entrada[1]) > int(entrada[0]):
        print "Crescente"
    else:
        break
