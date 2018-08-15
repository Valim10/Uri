a = 0
def fib(n):
    global a
    a = a + 1
    if(n<=1):
        return n
    return fib(n-1) + fib(n-2)

nb =input()
while (nb > 0):
    nb-=1
    n = input()
    b = (fib(n))
    c = a-1
    a = 0
    print 'fib('+str(n)+') = ' + str(c) + ' calls = '+ str(b)
    


