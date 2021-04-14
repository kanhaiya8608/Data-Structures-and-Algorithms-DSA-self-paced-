def minOperations(n):
    if n<=3:
        return n-1
    elif(n%2!=0):
        return (1+min(minOperations(n-1), minOperations(n+1)))
    else:
        return (1+minOperations(n//2))


if __name__=="__main__":
    t = int(input())
    while(t>0):
        n = int(input())
        print(minOperations(n))
        t=t-1
