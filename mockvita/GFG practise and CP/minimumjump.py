def jumps(list):
    counter = 1
    index = 0
    
    while True:
        max_value =0
        for i in range(index, list[index]+index, 1):
            if i >= len(list)-1:
                return counter
            if list[i] > max_value:
                max_value = list[i]
        index = max_value + index
        if list[index] == 0:
            return -1
        counter = counter + 1
        
sub_liste = []
testcase = -1
liste = []

while int(testcase) < 0:
    testcase = input("Testcases")

for i in range(0, int(testcase), 1):
    length = input("length")
    for x in range(0, int(length), 1):
        sub_liste.append(int(input("enter number")))
    liste.append(sub_liste)
    
for j in liste:
    print(jumps(j))
