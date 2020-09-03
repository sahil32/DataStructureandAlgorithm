Limits=input().split()
nut=input().split('|')
for data in Limits:
    if data[-1]=='P':
        limitP=int(data[:-1])
    elif data[-1]=='C':
        limitC=int(data[:-1])
    elif data[-1]=='F':
        limitF=int(data[:-1])
dataitem=[]
for data in nut:
    for data1 in data.split():
        if data1[-1]=='P':
            limitP1=int(data1[:-1])
        elif data1[-1]=='C':
            limitC1=int(data1[:-1])
        elif data1[-1]=='F':
            limitF1=int(data1[:-1])
    dataitem.append([limitP1,limitC1,limitF1])
dataitem.sort(key=sum,reverse=True)
Selection=[True for i in range(len(dataitem))]
                               
while True:
    flag=True
    for i in range(len(dataitem)):
        if Selection[i]==True and limitP-dataitem[i][0]>=0 and limitC-dataitem[i][1]>=0 and limitF-dataitem[i][2]>=0:
            limitP-=dataitem[i][0]
            limitC-=dataitem[i][1]
            limitF-=dataitem[i][2]
            flag=False
        else:
            Selection[i]=False
    if flag==True:
        break
print(limitP,limitC,limitF)
