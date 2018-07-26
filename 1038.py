v = [4.00, 4.50,5.00,2.00 ,1.50]


item, quanti = raw_input().split(" ")
item = int(item)
quanti = int(quanti)

print "Total: R$ %.2f" % (v[item-1]*quanti)
