entrada = input()

while entrada > 0 :
    entrada-=1
    word = raw_input()
    count1=0
    count2=0
    if(len(word)==3):
        if(word[0]=='o'):
            count1+=1
        elif(word[0]=='t'):
            count2+=1
        if(word[1]=='n'):
            count1+=1
        elif(word[1]=='w'):
            count2+=1
        if(word[2]=='e'):
            count1+=1
        elif(word[2]=='o'):
            count2+=1
        if(count1>count2):
            print "1"
        else:
            print "2"
        
    else:
        print "3"
