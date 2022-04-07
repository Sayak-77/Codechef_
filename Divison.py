t=int(input())
i=0
list1=[]
list2=[]
lst=[]
while t>0:
    element=input()
    lst=element.split()
    count=0
    lst=list(map(int, lst))
    ele=input()
    list1=ele.split()
    list1=list(map(int, list1))
    for i in range(0,lst[0]):
        if(list1[i] <= lst[1] and list1[i] % lst[2] == 0):
            count=count+1
    list2.append(count)
    t=t-1
for i in range(0,len(list2)):
    print(list2[i])

