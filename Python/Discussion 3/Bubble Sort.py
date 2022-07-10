def bubbleSort(alist):
    for passnum in range(len(alist)-1):
        swapped = False
        for i in range(len(alist)-passnum-1):
            if alist[i] < alist[i+1]:
                temp = alist[i]
                alist[i] = alist[i+1]
                alist[i+1] = temp
                swapped = True
        if not swapped:
            break

alist=[3,1,2,4,6,7,5,0,9]
bubbleSort(alist)
print(alist)