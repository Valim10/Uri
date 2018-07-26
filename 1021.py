valor = float(input())
valor = valor * 1.00
v100 =0
v50 =0
v20 =0
v10 =0
v5 =0
v2 =0
v1 =0
v05 =0
v025 =0
v010 = 0
v005 =0
v001 = 0

while valor > 0.00 :
    if valor >=100.00:
        v100= v100+ 1
        valor= round(valor - 100.00,2)
    elif valor>=50.00:
        v50= v50+ 1
        valor= round(valor - 50.00,2)
    elif valor>=20.00:
        v20= v20+ 1
        valor= round(valor - 20.00,2)
    elif valor>=10.00:
        v10 = v10 + 1
        valor= round(valor - 10.00,2)
    elif valor >= 5.00:
        v5 = v5 + 1
        valor= round(valor - 5.00,2)
    elif valor >= 2.00:
        v2 = v2 + 1
        valor= round(valor - 2.00,2)
    elif valor >= 1.00:
        v1 = v1 + 1
        valor= round(valor - 1.00,2)
    elif valor >= 0.50 :
        v05 = v05 + 1
        valor= round(valor - 0.50,2)
    elif valor >= 0.25:
        v025 = v025 + 1
        valor= round(valor - 0.25,2)
    elif valor >= 0.10:
        v010 = v010 + 1
        valor= round(valor - 0.10,2)
    elif valor >= 0.05:
        v005 = v005 + 1
        valor= round(valor - 0.05,2)
    else :
        v001= v001 + 1
        valor= round(valor - 0.01,2)
         
print 'NOTAS:'
print str(v100) + ' nota(s) de R$ 100.00'
print str(v50) + ' nota(s) de R$ 50.00'
print str(v20) + ' nota(s) de R$ 20.00'
print str(v10) + ' nota(s) de R$ 10.00'
print str(v5) + ' nota(s) de R$ 5.00'
print str(v2) + ' nota(s) de R$ 2.00'
print 'MOEDAS:'
print str(v1) + ' moeda(s) de R$ 1.00'
print str(v05)+ ' moeda(s) de R$ 0.50'
print str(v025)+ ' moeda(s) de R$ 0.25'
print str(v010)+ ' moeda(s) de R$ 0.10'
print str(v005)+ ' moeda(s) de R$ 0.05'
print str(v001)+ ' moeda(s) de R$ 0.01'
