while 1:
    quant = input()
    if quant == 0:
        break
    i = 0
    j = 0
    for i in range(0, quant):
        for j in range(0, quant):
            if( i * j < quant):
                print "%d "%(i+j)
            else:
                print i
        print "\n"
        

