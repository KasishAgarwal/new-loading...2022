
def pascal(n):
    """
    Prints Pascal Triangle
    """
    a=[]
    for i in range(1,n+1):
        z=[]
        c=1
        for j in range(1,i+1):
            z.append(c)

            c=c*(i-j)//j
        a.append(z)
    print(a)


pascal(5)