
j = 1
i = 0
while(i<=1.8):
    if i == 0 or i == 1.0 or i == 2.0:
        print 'I=%d J=%d'%(i,i+j)
        print 'I=%d J=%d'%(i,i+j+1)
        print 'I=%d J=%d'%(i,i+j+2)
    else:
        print 'I=%.1f J=%.1f'%(i,i+j)
        print 'I=%.1f J=%.1f'%(i,i+j+1)
        print 'I=%.1f J=%.1f'%(i,i+j+2)
    
    i+=0.2
i = 2
print 'I=%d J=%d'%(i,i+j)
print 'I=%d J=%d'%(i,i+j+1)
print 'I=%d J=%d'%(i,i+j+2)
