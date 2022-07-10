def descending_order(num):
    # Bust a move right here
    numlist = list(str(num))
    for pass_num in range(len(numlist)-1):
        swapped = False
        for i in range(len(numlist)-1-pass_num):
            if numlist[i] < numlist[i+1]:
                temp = numlist[i]
                numlist[i] = numlist[i+1]
                numlist[i+1] = temp
                swapped = True
            if not swapped:
                break
        num_str = ''.join(numlist)
        return int(num_str)

print(descending_order(87905))


