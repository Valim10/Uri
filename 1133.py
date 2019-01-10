e1 = input()
e2 = input()
if int(e1) > int(e2):
    for i in range(e2+1,e1):
        if i%5==2 or i%5==3:
            print i
            
else:
    for i in range(e1+1,e2):
        if i % 5 == 2 or i % 5 == 3:
            print i
    
