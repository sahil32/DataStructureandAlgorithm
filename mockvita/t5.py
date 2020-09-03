N=int(input())
l=[]
for k in range(3):
    s=input()
    l.append(list(s))

i=0
d={'*.**.*':"U",'******':"E",'***.*.':'I',".*.***":'A','****.*':'O'}
while True:
    if l[0][i]=="#":
        print("#",end='')
        i+=1
    elif l[0][i]=='.' and l[1][i]=='.' and l[2][i]=='.':
        i+=1
    else:
        key=''.join(l[0][i:i+3])+''.join(l[1][i:i+3])
        print(d[key],end='')
        i+=3
    if i>=N:
        break
        
        
    
    
    
