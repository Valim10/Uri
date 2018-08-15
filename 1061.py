bla,di = raw_input().split()
hi,bla3,mi,bla33,si = raw_input().split()
bla,df = raw_input().split()
hf,bla122,mf,bla12,sf = raw_input().split()


di = int(di)
hi = int(hi)
mi = int(mi)
si = int(si)
df = int(df)
hf = int(hf)
mf = int(mf)
sf = int(sf)
'''
1 dia = 24h =  24 * 1h=60m=3600s

di * 24 * 3600 :
hi * 3600 :
mi * 60 :
si

df * 24 * 3600 :
hf * 3600 :
mf * 60 :
sf
'''
dia = df - di

hora = hf - hi
if(hora < 0):
	hora = 24 + hora
	dia = dia - 1

minuto = mf - mi 
if(minuto < 0):
	minuto = 60 + minuto
	hora = hora - 1
	
segundos = sf - si
if(segundos < 0):
	segundos = 60 + segundos
	minuto = minuto - 1

if(dia <= 0):
	dia = 0

print "%d dia(s)" %dia
print "%d hora(s)" %hora
print "%d minuto(s)" %minuto
print "%d segundo(s)" %segundos
