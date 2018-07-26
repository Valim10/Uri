N1,N2,N3,N4 = raw_input().split(" ")

N1 = float(N1)
N2 = float(N2)
N3 = float(N3)
N4 = float(N4)

media =(2*N1 + 3*N2 + 4*N3 + 1*N4 ) /10

print "Media: %.1f" %media

if(media <5.0):
    print "Aluno reprovado."
elif media >=5.0 and media<7.0 :
    N5 = raw_input()
    N5 = float(N5)
    print "Aluno em exame."
    print "Nota do exame: %.1f" %N5
    if (media + N5)/2 >= 5.0:
        print "Aluno aprovado."
    else:
        print "Aluno reprovado."
    print "Media final: %.1f" %((media + N5)/2)
else :
    print "Aluno aprovado."
