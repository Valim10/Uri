quant = input()
i = 0
ponto = [6,2,5,5,4,5,6,3,7,6] 
while i < quant :
     entrada = raw_input()
     v=0
     q_led = 0
     while v < len(entrada):
         q_led += ponto[int(entrada[v])]
         v+=1
     print q_led,"leds" 
     i+=1
         
    
