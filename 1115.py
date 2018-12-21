while 1 :
    entrada = raw_input().split()
    if int(entrada[0]) > 0 and int(entrada[1]) > 0:
        print "primeiro"
    elif int(entrada[0]) > 0 and int(entrada[1]) < 0:
        print "quarto"
    elif int(entrada[0]) < 0 and int(entrada[1]) < 0:
        print "terceiro"
    elif int(entrada[0]) < 0 and int(entrada[1]) > 0:
        print "segundo"
    elif int(entrada[0]) == 0 or int(entrada[1]) == 0:
        break
 
