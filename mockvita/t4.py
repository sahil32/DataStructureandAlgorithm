D,P=map(int,input().split())
HP=D//P
N=HP
while N>1:
    i=1 
    counter=0
    while True:
        j=(i-1)*HP+N
        print(i,HP,N,j)
        if d[j] and j<=D:
            counter+=1
        else:
            break
        if i==P:
            break
        i+=1
    if counter==P:
        res+=1
    N-=1

print(res)
