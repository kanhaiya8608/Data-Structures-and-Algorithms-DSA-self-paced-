import math
def ps(n):
    num=int(math.sqrt(n))
    return num*num==n

testcases=int(input())
while(testcases>0):
    n=int(input())
    smaller=0
    greater=0
    if(ps(n) is True):
        smaller=int(math.sqrt(n))-1
        greater=int(math.sqrt(n))+1
    else:
        smaller=math.floor(math.sqrt(n))
        greater=math.ceil(math.sqrt(n))
    if(abs(smaller*smaller-n)<abs(greater*greater-n)):
        print(int(smaller*smaller))
    else:
        print(int(greater*greater))
    testcases-=1
