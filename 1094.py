#coding: utf-8
quant = input()
coelhos = 0
ratos = 0
sapos  = 0
total  = 0
for i in range(quant):
    qe,e= raw_input().split()
    qe = int(qe)
    total += qe
    if( e == 'C') :
        coelhos += qe
    elif e == 'R' :
        ratos += qe
    elif e == 'S' :
        sapos += qe


print 'Total:',total,'cobaias'
print 'Total de coelhos:',coelhos
print 'Total de ratos:',ratos
print 'Total de sapos:',sapos
print 'Percentual de coelhos: %.2f %%'% (coelhos*100/(total*1.0))
print 'Percentual de ratos: %.2f %%'% (ratos*100/(total*1.0))
print 'Percentual de sapos: %.2f %%'%(sapos*100/(total*1.0))
    
