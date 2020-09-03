string = input()
n = int(input())
pl = []
key = []
for i in range(n):
    lst = input().split()
    pl.append(lst[0])
    key.append(lst[1])
text1 = ''.join(pl)
text2 = ''.join(key)
dict1 = {}
dict2 = {}
for a in text1:
    dict1[a]=dict1.get(a,0)+1
for a in text2:
    dict2[a]=dict2.get(a,0)+1
s_p=sorted(dict1.items(), key = lambda y:y[1])
sort_key=sorted(dict2.items(), key = lambda y:y[1])
pl = []
key = []
for ele in s_p:
    pl.append(ele[0])

for ele in sort_key:
    key.append(ele[0])
answer = ''
for i in range(len(string)):
    ind = pl.index(string[i])
    answer += key[ind]
print(answer)