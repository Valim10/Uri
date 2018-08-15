a= raw_input()
b= raw_input()
b=int(b)
a=int(a)

count = 0

if ( a > b):
    for  i in range(b+1,a):
          if( i % 2 != 0 ):
              #print i
              count+=i
else:
    for  i in range(a,b):
          if( i % 2 != 0 ):
              #print i
              count+=i

print count
          
