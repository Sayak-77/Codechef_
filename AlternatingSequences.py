# cook your dish here
t=int(input())
list1=[]
i=0
while t>0:
    n=int(input())
    esum=0
    osum=0
    ele=input()
    list1=ele.split()
    list1=list(map(int, list1))
    for i in range(0,n):
        if(i%2==0):
            esum+=list1[i]
        else:
            osum+=list1[i]
    output={True: esum, False: osum}[esum>osum]
    print(output)
    t=t-1

