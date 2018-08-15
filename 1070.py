a= raw_input()
a=int(a)
count_impar = 0
for  i in range(a, 100000):
      if( i % 2 != 0 and count_impar <6):
          print i
          count_impar+=1
      if( count_impar ==6 ):
          break
