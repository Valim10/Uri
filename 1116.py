x = input()
while x > 0 :
    entrada = raw_input().split()
    if  int(entrada[1]) != 0:
        print float(entrada[0])/float(entrada[1])
    elif int(entrada[1]) == 0:
        print "divisao impossivel"
           
    x=x-1
 
