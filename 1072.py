a= raw_input()
a=int(a)
i=0
qin= qout = 0
for  i in range(a):
    b = input()
    if ( b >= 10 and b <= 20):
        qin+=1
    else:
        qout+=1

print qin,"in"          
print qout,"out"
