num1 = 1
num2 = 2
total = num1 + num2
seq = "1,1,2,"

while total <= 1000:
    num1 = num1 + num2
    seq = seq + str(num1) + ","
    total = num1 + num2
    if total >= 1000:
        break
    else:
        num2 = num1+num2
        seq = seq + str(num2) + ","
    

print(seq[:-1])


# a = 1
# b = 1
# while a < 1000:
#   print(a)
#   a , b = b , a + b
    



