def find_even_index(arr):
    for i in range(len(arr)-1):
        if sum(arr[:i]) == sum(arr[i+1:]):
            return i
        else:
            return -1

print(find_even_index([1,100,50,-51,1,1]))

