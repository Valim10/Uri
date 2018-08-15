a= raw_input()
a=int(a)
i=0
for  i in range(a):
    b = raw_input()
    b = float(b)
    if b != 0 :
        if ( b % 2 == 0 ):
            if b > 0:
                print 'EVEN POSITIVE'
            else:
                print 'EVEN NEGATIVE'

        else:
            if(b >0):
                print 'ODD POSITIVE'
            else:
                print 'ODD NEGATIVE'
    else:
        print 'NULL'
 
