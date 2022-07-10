count = 0
while True:
    word = input("enter a string: ")
    if word == "####":
        break
    else:
        for letter in word:
            if letter == 'a':
                count += 1
                break
        
print(count , "strings with letter 'a'")
