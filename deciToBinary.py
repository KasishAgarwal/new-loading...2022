
# convert Decimal to binary without using inbuilt python function bin() 

"""
1.take input from user
2.convert it into integer
3.apply while loop until number is greater than or equal to 1
    4.calculate mod
    5.calculate diviser
    6.append mod value to a string
5.print result


"""
# take user input
x = int(input('enter value'))
result = ''
quo = 0

# apply while loop 
while x >= 1:
    # calculate mod
    y = x % 2
    # calculate diviser
    x = int(x / 2)
    print(x,y)
    # append mod value to a string
    result = str(y) + result
    # print result
print(result)