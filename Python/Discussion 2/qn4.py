num = int(input("Please enter pattern width: "))
list1 = list(range(1,num+1)) + list(range(num-1,0,-1))
output = ""
for number in list1:
    pattern = number*"*"
    print(pattern, end = '\n')


