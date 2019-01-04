qtd,alt= raw_input().split()
qtd = int(qtd)
print "aaa"
while qtd > 0:
    titan = raw_input()
    titan_v = titan.split()
    name_titan = titan.strip(titan_v[len(titan_v)-1])
    ttitan = titan_v[len(titan_v)-1] 
    if int(ttitan) > int(alt):
        print name_titan
    qtd= qtd-1
